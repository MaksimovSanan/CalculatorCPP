CXX = g++
FLAGS = -std=c++17 -Wall -Werror -Wextra
SANITIZE = -fsanitize=address -pedantic
TARGETS = tests.cc model.cc controller.h
GCOV = -fprofile-arcs -ftest-coverage -fPIC -pthread
GTEST = -lgtest -lgtest_main


all: gcov_report

install: clean uninstall
	mkdir build
	cd build && cmake ../Calc/CMakeLists.txt && make
	cp -rf build/Calc.app $(HOME)/Desktop/Calc.app

uninstall: clean
	rm -rf build
	rm -rf $(HOME)/Desktop/Calc.app

test: clean
	${CXX} ${TARGETS} ${FLAGS} ${GCOV} ${GTEST} -o test
	./test

clean:
	rm -rf *.o *.out *.gch *.dSYM *.gcov *.gcda *.gcno *.a *.css *.html *.info test test_asan report

gcov_report: clean add_coverage test
	mkdir report
	gcovr --html-details -o report/coverage.html
	open ./report/coverage.html

dist: clean uninstall install
	mkdir ../dist
	cp -r $(HOME)/Desktop/Calc.app ../dist/.
	cp ../README.md ../dist    
	tar -czvf dist.tar.gz ../dist
	rm -rf ../dist

add_coverage:
	$(eval FLAGS += --coverage)

.PHONY: test install uninstall gcov_report dist clean add_coverage dvi
#include <gtest/gtest.h>

#include <iostream>

#include "controller.h"
#include "model.h"

TEST(AllFunc, True) {
  S21::Model m1;

  bool update_result = m1.UpdateFunc("+sin(x)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = sin(5);
    double calculate_result = m1.Calculate(5);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("-sin(-0.5)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = -sin(-0.5);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("cos(0.5)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = cos(0.5);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("tan(0.5)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = tan(0.5);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("atan(0.5)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = atan(0.5);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("acos(0.5)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = acos(0.5);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("asin(0.5)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = asin(0.5);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("asin(0.5) * 5");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = asin(0.5) * 5;
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("0.3^2");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = pow(0.3, 2);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("sqrt(9)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = sqrt(9);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("(7 mod 3)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = fmod(7, 3);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("6 / 2");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = 6 / 2;
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("ln(3)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = log(3);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc("log(2)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = log10(2);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }

  update_result = m1.UpdateFunc(
      "(-sin(-0.5) + cos(0.5) + tan(0.5) + atan(0.5) + acos(0.5) + asin(0.5) * "
      "5) / 0.3^2 + sqrt(9) - (7 mod 3) + 5 + 6 / 2 + ln(3) - log(2)");

  ASSERT_EQ(update_result, true);

  if (update_result) {
    double res_og = (-sin(-0.5) + cos(0.5) + tan(0.5) + atan(0.5) + acos(0.5) +
                     asin(0.5) * 5) /
                        pow(0.3, 2) +
                    sqrt(9) - (7 % 3) + 5 + 6 / 2 + log(3) - log10(2);
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(res_og - calculate_result < 1e-6);
  }
}

TEST(ErrorsUpdateFunc, False) {
  S21::Model m1;
  bool update_result = m1.UpdateFunc("kiskiskis");
  ASSERT_EQ(update_result, false);

  update_result = m1.UpdateFunc("1.1.1");
  ASSERT_EQ(update_result, false);

  update_result = m1.UpdateFunc("=");
  ASSERT_EQ(update_result, false);

  update_result = m1.UpdateFunc("123 321");
  ASSERT_EQ(update_result, false);

  update_result = m1.UpdateFunc("5x+3");
  ASSERT_EQ(update_result, false);
}

TEST(ErrorsCalculate, False) {
  S21::Model m1;

  bool update_result = m1.UpdateFunc("5**5");
  ASSERT_EQ(update_result, true);
  if (update_result) {
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(calculate_result != calculate_result);
  }

  update_result = m1.UpdateFunc("*5");
  ASSERT_EQ(update_result, true);
  if (update_result) {
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(calculate_result != calculate_result);
  }

  update_result = m1.UpdateFunc("*");
  ASSERT_EQ(update_result, true);
  if (update_result) {
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(calculate_result != calculate_result);
  }

  update_result = m1.UpdateFunc("*5+3");
  ASSERT_EQ(update_result, true);
  if (update_result) {
    double calculate_result = m1.Calculate(1);
    ASSERT_TRUE(calculate_result != calculate_result);
  }
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

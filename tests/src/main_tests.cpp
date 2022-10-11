#include <gtest/gtest.h>
#include <calc.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// Demonstrate linking with the actual code under test.
TEST(CalcTest, Addition){
  int a = 10;
  int b = -50;
  int sum = a + b;
  Calc calc;
  int res = calc.add(a,b);
  // Expect equality.
  EXPECT_EQ(sum, res);
  // Print code version
  // print_version();
}

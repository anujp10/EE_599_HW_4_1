#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FilterShould, FilterReturn) {
  Solution solution;
  std::vector <int> input = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> actual = solution.FilterInput(input);
  std::vector <int> expected = {1, 3, 5, 7, 9};
  EXPECT_EQ(expected, actual);
}

TEST(FilterShould_1, FilterReturn_1) {
  Solution solution;
  std::vector <int> input = {};
  std::vector<int> actual = solution.FilterInput(input);
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(FilterShould_2, FilterReturn_2) {
  Solution solution;
  std::vector <int> input = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> actual = solution.MapInput(input);
  std::vector <int> expected = {4, 1, 0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
  EXPECT_EQ(expected, actual);
}

TEST(FilterShould_3, FilterReturn_3) {
  Solution solution;
  std::vector <int> input = {};
  std::vector<int> actual = solution.MapInput(input);
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(FilterShould_4, FilterReturn_4) {
  Solution solution;
  std::vector <int> input = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int actual = solution.ReduceInput(input);
  int expected = 45;
  EXPECT_EQ(expected, actual);
}

TEST(FilterShould_5, FilterReturn_5) {
  Solution solution;
  std::vector <int> input = {};
  int actual = solution.ReduceInput(input);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}
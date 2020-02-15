#include "solution.h"
#include <algorithm>

bool isOdd(int i) {
  return ((i % 2) == 1);
}

int Square(int i) {
  return (i * i);
}

std::vector<int> Solution::FilterInput(const std::vector <int> &input) { 
  std::vector <int> result(input.size());
  if (input.size() == 0) {
    result.clear();
    return result;
  }

  auto count = std::copy_if(input.begin(), input.end(), result.begin(), isOdd);
  result.resize(std::distance(result.begin(),count));

  return result;
}

std::vector<int> Solution::MapInput(const std::vector <int> &input) {
  std::vector <int> result (input.size());
  if (input.size() == 0) {
    result.clear();
    return result;
  }
  std::transform(input.begin(), input.end(), result.begin(), Square);

  return result;
}

int Solution::ReduceInput(const std::vector <int> &input) {
  if (input.size() == 0) {
    return 0;
  }
  int result = std::accumulate(input.begin(), input.end(), 0);

  return result;
}
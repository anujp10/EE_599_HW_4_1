#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  std::vector <int> FilterInput (const std::vector <int> &input);
  std::vector <int> MapInput (const std::vector <int> &input);
  int ReduceInput(const std::vector <int> &input);
};

#endif
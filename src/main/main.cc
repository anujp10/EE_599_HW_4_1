#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector <int> input = {12, 3, 5, 98, 0, -2, -3, 1};
    std::vector <int> result1 = solution.FilterInput(input);
    for (unsigned int i = 0; i < result1.size(); i++)
        std::cout << result1[i] << " ";
    std::cout << std::endl;

    std::vector <int> result2 = solution.MapInput(input);
    for (unsigned int i = 0; i < result2.size(); i++)
        std::cout << result2[i] << " ";
    std::cout << std::endl;

    int result3 = solution.ReduceInput(input);
    std::cout << result3 << std::endl;

    return EXIT_SUCCESS;
}
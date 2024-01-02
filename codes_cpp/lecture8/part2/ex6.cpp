#include <iostream>
#include <array>
#include <vector>

int main() {
    // Similarities between std::array<int> and std::vector<int>

    // Initialization
    std::array<int, 3> arr = {1, 2, 3};
    std::vector<int> vec = {1, 2, 3};

    // Access by Index
    int value1 = arr[1];
    int value2 = vec[1];

    // Iteration using iterators
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Differences between std::array<int> and std::vector<int>

    // Resize (only for std::vector)
    vec.resize(5, 4);  // Resize vector to size 5 with initial value 4

    // Copying and Assignment
    std::array<int, 3> arrCopy = arr;  // Copying one array to another
    std::vector<int> vecCopy = vec;    // Copying one vector to another (potentially involves dynamic memory allocation)

    // Print the copied containers
    std::cout << "Copied array: ";
    for (const auto &elem : arrCopy) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Copied vector: ";
    for (const auto &elem : vecCopy) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <vector>

int main() {
    // Similarities between std::string and std::vector<char>

    // Initialization
    std::string str = "Hello";
    std::vector<char> vec = {'H', 'e', 'l', 'l', 'o'};

    // Access by Index
    char char1 = str[1];
    char char2 = vec[1];

    // Iteration using iterators
    for (auto it = str.begin(); it != str.end(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // Differences between std::string and std::vector<char>

    // String-specific operations
    str += " World";  // Concatenation
    vec.push_back(' '); // Adding a space to the vector

    // String-specific member functions
    size_t strSize = str.size();
    size_t vecSize = vec.size();

    // Print sizes
    std::cout << "String size: " << strSize << std::endl;
    std::cout << "Vector size: " << vecSize << std::endl;

    return 0;
}

#include <iostream>
#include <vector>

// Function to print container elements using const iterator
template <typename Container>
void printContainerConst(const Container& cont) {
    for (typename Container::const_iterator it = cont.begin(); it != cont.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// Function to square elements using non-const iterator
template <typename Container>
void squareElementsNonConst(Container& cont) {
    for (typename Container::iterator it = cont.begin(); it != cont.end(); ++it) {
        *it = (*it) * (*it);
    }
}

int main() {
    // Using const iterators
    std::vector<int> vecConst = {1, 2, 3, 4, 5};
    std::cout << "Using Const Iterator: ";
    printContainerConst(vecConst);

    // Using non-const iterators for modification
    std::vector<int> vecNonConst = {1, 2, 3, 4, 5};
    std::cout << "Original Vector: ";
    printContainerConst(vecNonConst);

    squareElementsNonConst(vecNonConst);
    
    std::cout << "After Squaring: ";
    printContainerConst(vecNonConst);

    return 0;
}

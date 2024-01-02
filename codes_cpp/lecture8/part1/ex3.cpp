#include <iostream>
#include <deque>

// Function to iterate and print elements of a deque
void printDeque(const std::deque<int>& deq) {
    // Change iterator type to const iterator
    for (std::deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::deque<int> deq;

    // Push elements to the deque
    deq.push_back(1);
    deq.push_back(2);
    deq.push_back(3);

    // Pass the deque to the function
    printDeque(deq);

    return 0;
}

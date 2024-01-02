#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

// Function to iterate and print elements of a container
template <typename Container>
void printContainer(const Container& cont) {
    for (const auto& elem : cont) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec;
    std::deque<int> deq;
    std::list<int> lst;
    std::forward_list<int> fwd_lst;

    // Using emplace_back
    vec.emplace_back(1);
    deq.emplace_back(2);
    lst.emplace_back(3);
    fwd_lst.emplace_front(4);  // emplace_front for forward_list

    // Print elements of each container
    printContainer(vec);
    printContainer(deq);
    printContainer(lst);
    printContainer(fwd_lst);

    return 0;
}

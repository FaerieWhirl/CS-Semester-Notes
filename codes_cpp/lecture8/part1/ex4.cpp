#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <type_traits>

// Function to iterate and print elements of a container
template <typename Container>
void printContainer(const Container& cont) {
    // Check if the container supports random access
    if constexpr (std::is_same<typename Container::iterator, typename Container::const_iterator>::value) {
        // Random access loop
        std::cout << "Random access loop: ";
        for (unsigned int i = 0; i < cont.size(); ++i) {
            std::cout << cont[i] << " ";
        }
    } else {
        // Non-random access loop
        for (const auto& elem : cont) {
            std::cout << elem << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    std::deque<int> deq = {1, 2, 3};
    std::list<int> lst = {1, 2, 3};
    std::forward_list<int> fwd_lst = {1, 2, 3};

    // Print elements of each container
    printContainer(vec);
    printContainer(deq);
    printContainer(lst);
    printContainer(fwd_lst);

    return 0;
}

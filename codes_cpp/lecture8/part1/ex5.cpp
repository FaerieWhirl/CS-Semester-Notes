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
    std::vector<int> vec = {1, 2, 3};
    std::deque<int> deq = {4, 5, 6};
    std::list<int> lst = {7, 8, 9};
    std::forward_list<int> fwd_lst = {10, 11, 12};

    // Copy construct from the same type
    std::vector<int> vec_copy(vec);
    std::deque<int> deq_copy(deq);
    std::list<int> lst_copy(lst);
    std::forward_list<int> fwd_lst_copy(fwd_lst);

    // Copy construct from different types
    std::vector<int> vec_from_deq(deq.begin(), deq.end());
    std::deque<int> deq_from_lst(lst.begin(), lst.end());
    std::list<int> lst_from_fwd_lst(fwd_lst.begin(), fwd_lst.end());
    std::forward_list<int> fwd_lst_from_vec(vec.begin(), vec.end());

    // Print original containers
    std::cout << "Original containers:\n";
    printContainer(vec);
    printContainer(deq);
    printContainer(lst);
    printContainer(fwd_lst);

    // Print copied containers
    std::cout << "\nCopied containers:\n";
    printContainer(vec_copy);
    printContainer(deq_copy);
    printContainer(lst_copy);
    printContainer(fwd_lst_copy);

    // Print containers copied from different types
    std::cout << "\nContainers copied from different types:\n";
    printContainer(vec_from_deq);
    printContainer(deq_from_lst);
    printContainer(lst_from_fwd_lst);
    printContainer(fwd_lst_from_vec);

    return 0;
}


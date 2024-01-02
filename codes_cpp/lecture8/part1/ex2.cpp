#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

using namespace std;

int main() {
    // Declare variables
    vector<int> vec;
    deque<int> deq;
    list<int> lst;
    forward_list<int> flst;

    // Push elements into containers
    for (int i = 1; i <= 5; ++i) {
        vec.push_back(i);
        deq.push_back(i);
        lst.push_back(i);
        flst.push_front(i);
    }

    // Print elements using iterators
    cout << "Vector elements: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Deque elements: ";
    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "List elements: ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    cout << endl;

    cout << "Forward List elements: ";
    for (forward_list<int>::iterator it = flst.begin(); it != flst.end(); ++it) {
        cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

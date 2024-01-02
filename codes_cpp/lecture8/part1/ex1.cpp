#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

using namespace std;

int main(int argc, char const *argv[])
{
    // Vector
    vector<int> vec = {1, 2, 3};
    // Back insertion
    vec.push_back(4);  
    
    // Back removal
    vec.pop_back();  
    
    //vector does not has a push_front


    // Deque
    deque<int> deq = {1, 2, 3};
    // Back insertion
    deq.push_back(4);
    // Front insertion  
    deq.push_front(0);  
    // Back removal
    deq.pop_back();  
    // Front removal
    deq.pop_front();  

    // List
    std::list<int> lst = {1, 2, 3};
    lst.push_back(4);  // Back insertion
    lst.push_front(0);  // Front insertion
    lst.pop_back();  // Back removal
    lst.pop_front();  // Front removal

    // Forward List
    std::forward_list<int> fwd_lst = {1, 2, 3};
    //fwd_lst.push_back(4);  // Uncommenting this line would result in an error, as forward_list doesn't support back insertion
    fwd_lst.push_front(0);  // Front insertion
    // fwd_lst.pop_back();  // Uncommenting this line would result in an error, as forward_list doesn't support back removal
    // fwd_lst.pop_front();  // Uncommenting this line would result in an error, as forward_list doesn't support front removal


    return 0;
}

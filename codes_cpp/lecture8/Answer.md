---
highlight: github
---
# Studio Session on C++ Sequence Containers

## Part 1
### 1. Exercise 1
> Open Visual Studio and create a new Visual C++ Empty Project for this studio. In your main function, declare variables of each of the following parameterized sequence container types: vector, deque, list, and forward_list. Build your solution, fixing any errors or warnings that occur (add appropriate #include and using directives to your main source file as necessary). Then try using each the above methods on each of the container variables in your main function, fixing errors and warnings where possible, and where methods simply are not supported commenting out the appropriate lines of your program. As the answer to this exercise, say whether each of the containers allows back insertion, front insertion, neither, or both.

#### codes
>`vector` and`front_list` do not have `push_front`


```cpp
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

```

### 2. Exercise 2
> Use any appropriate method whose name starts with push_ that is supported by the container (per the results of the previous exercise) to push the same set of values into each of the containers, so that the values end up in the same order (from beginning to end of the container’s range) in each of the containers. For each of the containers, write a for loop whose iteration variable (1) is of the container’s associated iterator type (for example, deque::iterator), (2) starts at the beginning of the container’s range (as given by the container’s begin() method), and (3) until it moves past the last element of the range (by reaching the position given by the container’s end() method) prints out the value at each position and then moves to the next position. Build the program and fix any errors or warnings that you encounter. As the answer to this exercise, (1) give the output that is produced by these loops, when you run the program, and (2) for containers that support both push_front and push_back say what effect using one push method vs. the other has on the order in which the values appear in the container.

#### 2.1 output


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/54ecfe54a5b6489b9c29258227ffcef6~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=422&h=204&s=23749&e=png&b=1e1e1e)

#### 2.2 question

> for containers that support both push_front and push_back say what effect using one push method vs. the other has on the order in which the values appear in the container.

对于支持 `push_front` 和 `push_back` 的容器，这两种方法在容器中添加元素的顺序上有重要影响：

1.  **push_back：** 使用 `push_back` 将元素添加到容器的末尾。添加的元素会排列在容器中已有元素的后面。这意味着新元素会成为容器的最后一个元素，不影响已有元素的位置。
1.  **push_front：** 使用 `push_front` 将元素添加到容器的开头。添加的元素会排列在容器中已有元素的前面。这意味着新元素会成为容器的第一个元素，并将已有元素向后移动一个位置。

### 3. Exercise 3
> Starting with the code from the previous exercise, move the entire for loop for one of the container types into a function that takes a reference to a const instance of that container type, and in the main function pass the container into a call to that function you just implemented. Try to build your program using the same (non-const) iterator type that was used in the previous exercises, in that function. Then, modify the iterator type (and anything else that needs to be changed) to allow that function to compile and correctly iterate through and print out the contents of the container. As the answer to this exercise, please describe all the changes you had to make, in order for the function to compile and run correctly.

#### 3.1 describe
In the function `printDeque`, I changed the iterator type to `std::deque<int>::const_iterator`. This modification allows the function to work correctly with a const reference to the deque in the main function. It's important to use a const iterator when dealing with a const reference to ensure that the elements of the container are not modified within the function.

### 4. Exercise 4
>A random access container allows any position in its range to be accessed in constant time using the subscript operator (represented by square brackets [], and also known as the indexing operator). For each of the containers, add another for loop whose iteration variable is of type unsigned int, and try to use that variable, along with the subscript operator and the container’s size() method, to implement the loop so that it produces the same result as the corresponding loop from the previous exercises. Build your solution, and fix any warnings and errors you can, but then comment out any of the for loops that simply are not supported by the corresponding container’s interface. Run the program and confirm that the loops that are supported produce the same output as those from the previous exercise. As the answer to this exercise, say which of the containers are random access containers, and which are not, and why you think that in each case.

#### 4.1 Judge Random Accsess Container
1.  **Vector (`std::vector<int>`):** Random Access Container

    -   **Reason:** Vectors provide constant-time access to any element using the subscript operator. The elements are stored in a contiguous block of memory, and indexing directly accesses the memory location.

1.  **Deque (`std::deque<int>`):** Random Access Container

    -   **Reason:** Deques also provide constant-time access to any element using the subscript operator. Although deques are not guaranteed to be stored in a contiguous block of memory, they still support efficient random access.

1.  **List (`std::list<int>`):** Non-Random Access Container

    -   **Reason:** Lists do not support constant-time access to arbitrary elements using the subscript operator. Iterating through a list involves traversing each element sequentially from the beginning or end.

1.  **Forward List (`std::forward_list<int>`):** Non-Random Access Container

    -   **Reason:** Forward lists are singly linked lists, and they lack direct access to elements via the subscript operator. Similar to lists, iterating through a forward list involves traversing each element sequentially.


### 5. Exercise 5

> Try copy constructing an instance of each of the container types from the previous exercise, using the previously existing instance of the same container type as the argument to the constructor. Then try constructing instances of the different container types using existing instances of each of the different other container types as the argument to the constructor. Iterate through and print out the contents of each of the containers that you were able to construct successfully and compare their contents to the contents of the containers from which they were constructed. Based on what you observed, as the answer to this exercise please describe briefly which combinations of container types could be constructed from each other, and to what extent the contents of the existing instance were copied over into the newly constructed one.

#### 5.1 Qustion

**Observations:**

 -  Copy constructing from a `std::vector` to `std::list` (or other sequence containers) usually works when the target container type has a constructor accepting iterators.
 -   Copy constructing between different container types with incompatible constructors may require more explicit conversion methods or manual copying.

In summary, copy constructing between containers of the same type works straightforwardly, while constructing from one container type to another may require considering the constructors available in the target container type. It is essential to check the compatibility of constructors or conversion methods between different container types.

## Part 2

### 6. Exercise 6

> Try the previous exercises using an array and as the answer to this exercise please describe (1) to which of the other container types is an array most similar and why you think that; and (2) any differences you observed between an array and that other container type.

#### 6.1 (1)
In summary, `std::array<int>` is most similar to `std::vector<int>` in terms of syntax, indexing, and iterators.

#### 6.2 (2)

the key differences lie in their size flexibility, memory management, and ability to resize. `std::vector` is more flexible and dynamic, whereas `std::array` provides a fixed-size, stack-allocated alternative with compile-time size determination.

### 7. Exercise 7
> Try the previous exercises using a string and as the answer to this exercise please describe (1) to which of the other container types is a string most similar and why you think that; and (2) any differences you observed between a string and that other container type.

#### 7.1 (1)

A `std::string` is most similar to a `std::vector<char>`. Both `std::string` and `std::vector<char>` are sequence containers that can store a collection of elements. Here's why they are similar:

1.  **Sequential Storage:** Both `std::string` and `std::vector<char>` store elements in a sequential manner, allowing easy access and iteration.
1.  **Dynamic Size:** They can dynamically resize to accommodate changing numbers of elements.
1.  **Access by Index:** Elements in both containers can be accessed by their index.
1.  **Iterator Support:** Both provide iterator support, allowing traversal through the elements.
1.  **Similar Initialization:** They can be initialized using similar syntax, making them flexible for various use cases.

#### 7.2 (2)

The main differences between `std::string` and `std::vector<char>` include:

1.  **String-Specific Functions:**

    -   `std::string` has member functions specifically designed for string manipulation, such as `append`, `substr`, `find`, `compare`, etc. These functions simplify common string operations.
    -   `std::vector<char>` lacks these string-specific functions, as it is a more generic container without assumptions about the stored elements.

1.  **Character Encoding Awareness:**

    -   `std::string` is aware of character encodings and may provide functions for handling multi-byte or wide character encodings, depending on the C++ standard library implementation.
    -   `std::vector<char>` treats elements as generic characters without specific encoding awareness. It's more suitable for binary data or scenarios where character encoding is not a concern.

1.  **String Literal Initialization:**

    -   `std::string` allows easy initialization using string literals, making it convenient for representing and manipulating textual data.
    -   `std::vector<char>` does not have this convenience, and initialization with string literals involves more manual effort.

1.  **C-Style String Interoperability:**

    -   `std::string` provides member functions like `c_str()` to obtain a pointer to a null-terminated C-style string, facilitating interoperability with C-style string functions.
    -   `std::vector<char>` does not provide these specific functions, as it is more generic and does not assume the stored elements are null-terminated strings.

1.  **Size Calculation:**

    -   `sizeof(std::string)` includes additional internal bookkeeping for managing the string, making it larger than `sizeof(std::vector<char>)`.

1.  **Default Initialization:**

    -   `std::string` initializes to an empty string by default, while `std::vector<char>` initializes to an empty vector. The default initialization reflects their primary use cases.

In summary, `std::string` is tailored for string manipulation tasks with built-in support for common string operations, whereas `std::vector<char>` is a more generic container suitable for handling sequences of any type, including characters. The choice between them depends on the specific requirements of the task at hand.

### 8. Exercise 8
> Try any of the previous exercises using const iterators vs. non-const iterators. As the answer to this exercise please describe when const iterators and/or non-const iterators could be used, versus when they could not, and for each case please explain briefly why they could or could not be used.

#### 8.1 Answer

1.  **Const Iterators:**

    -   **When to use:** Const iterators should be used when you do not need to modify the elements in the container.
    -   **Why:** Const iterators provide read-only access to the container elements, ensuring that the elements are not modified accidentally. This is useful when you want to iterate over the container for inspection or printing without allowing modifications.

1.  **Non-Const Iterators:**

    -   **When to use:** Non-const iterators should be used when you need to modify the elements in the container.
    -   **Why:** Non-const iterators provide both read and write access to the container elements. They are suitable for scenarios where you intend to modify the values of elements during iteration, such as updating or transforming the contents of the container.


### 9. Exercise 9
> For any of the exercises that uses insertion (e.g., push_back) instead try using emplacement (e.g., emplace_back). For each case you tried, describe whether or not using emplacement worked, and why you think that did or did not work.

#### 9.1 Answer
**Explanation:**

-   `emplace_back` is used to directly construct and add elements to the containers.
-   `emplace_front` is used for `forward_list` since it lacks `emplace_back`.

**Note:**

-   `emplace_back` works well when you are constructing elements in-place or when the construction involves multiple parameters.

This modification can lead to improved performance and is particularly beneficial when dealing with complex types where the copy or move operations might be costly.















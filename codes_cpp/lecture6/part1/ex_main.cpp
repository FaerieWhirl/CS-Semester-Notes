#include <iostream>
#include "ex_class.h"
#include "ex_class.cpp"
using namespace std;

// int main() {
//     MyClass obj;
//     obj.member1 = 77;
//     // Accessing public member
//     std::cout << obj.member1 << std::endl;  
//     return 0;
// }



//exercise 3
// int main() {
//     // Create non-const object
//     MyClass obj;
//     std::cout << "Original values: " << obj.getMember1() << ", " << obj.getMember2() << std::endl;

//     // Set new values using mutator methods
//     obj.setMember1(42).setMember2(99);
//     std::cout << "New values: " << obj.getMember1() << ", " << obj.getMember2() << std::endl;

//     // Create const object
//     const MyClass constObj;
//     std::cout << "Const object values: " << constObj.getMember1() << ", " << constObj.getMember2() << std::endl;

//     // Uncommenting the lines below would result in a compilation error
//     // constObj.setMember1(10);  // Error: const object cannot invoke non-const member function
//     // constObj.setMember2(20);

//     return 0;
// }


//exercise 4
int main(int argc, char const *argv[])
{
    MyClass m; // default construction
    cout << "default construction: " << endl;
    cout << "m.member1 = " << m.getMember1() << " and m.member2  = " << m.getMember2() << endl;

    // chained use of mutator functions
    m.setMember1(7).setMember2(3);
    cout << "chained use of mutator functions: " << endl;
    cout << "m.member1 = " << m.getMember1() << " and m.member2  = " << m.getMember2() << endl;

    // copy construction
    MyClass n(m);
    cout << "copy construction: " << endl;
    cout << "n.member1 = " << n.getMember1() << " and n.member2  = " << n.getMember2() << endl;

    return 0;
}


// int main(int argc, char const *argv[])
// {
//     MyClass m; // default construction
//     cout << "default construction: " << endl;
//     cout << "m.member1 = " << m.member1() << " and m.member2  = " << m.member2() << endl;

//     // chained use of mutator functions
//     m.member1(7).member2(3);
//     cout << "chained use of mutator functions: " << endl;
//     cout << "m.member1 = " << m.member1() << " and m.member2  = " << m.member2() << endl;

//     // copy construction
//     MyClass n(m);
//     cout << "copy construction: " << endl;
//     cout << "n.member1 = " << n.member1() << " and n.member2  = " << n.member2() << endl;

//     return 0;
// }


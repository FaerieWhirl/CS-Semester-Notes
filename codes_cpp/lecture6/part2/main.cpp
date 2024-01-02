#include <iostream>
#include "class.h"
#include "class.cpp"

int main() {
    MyClass obj1;
    obj1.printDetails();

    MyClass obj2 = obj1.createCopy(obj1);
    obj2.printDetails();

    MyClass obj3;
    obj3.modifyAndReturn(obj3).setMember1(42);
    obj3.printDetails();

    return 0;
}

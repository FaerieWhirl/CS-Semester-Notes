#include <iostream>
#include "class.h"

// Default constructor
MyClass::MyClass() : member1(0), member2(0) {
    std::cout << "Default constructor called. Address: " << this << std::endl;
}

// Copy constructor using base-member initialization list
MyClass::MyClass(const MyClass& other) : member1(other.member1), member2(other.member2) {
    std::cout << "Copy constructor called. Address: " << this << std::endl;
}

int MyClass::getMember1() const {
    return member1;
}

int MyClass::getMember2() const {
    return member2;
}

MyClass& MyClass::setMember1(int value) {
    member1 = value;
    return *this;
}

MyClass& MyClass::setMember2(int value) {
    member2 = value;
    return *this;
}

void MyClass::printDetails() const {
    std::cout << "Object at Address: " << this << ", Member1: " << member1 << ", Member2: " << member2 << std::endl;
}

MyClass MyClass::createCopy(MyClass obj) const {
    std::cout << "Function createCopy called." << std::endl;
    obj.printDetails();
    return obj;
}

MyClass& MyClass::modifyAndReturn(MyClass& obj) {
    std::cout << "Function modifyAndReturn called." << std::endl;
    obj.printDetails();
    return obj;
}

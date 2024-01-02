#include <iostream>
#include "ex_class.h"

// Default constructor
MyClass::MyClass(): member1(0),member2(0)  {}

// Copy constructor using base-member initialization list
MyClass::MyClass(const MyClass& other): member1(other.member1), member2(other.member2) {}


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


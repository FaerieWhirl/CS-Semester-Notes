// my_class.h
#pragma once

// class MyClass {
// public:
//     int member1;
//     int member2;
// };

class MyClass {
private:
    int member1;
    int member2;

public:
    // Accessor methods
    int getMember1() const;
    int getMember2() const;

    // Mutator methods
    MyClass& setMember1(int value);
    MyClass& setMember2(int value);

    // Default constructor
    MyClass();

    // Copy constructor
    MyClass(const MyClass& other);

};
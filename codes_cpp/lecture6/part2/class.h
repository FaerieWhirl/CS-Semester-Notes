//class.h
#pragma once

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

    // Function to print object details
    void printDetails() const;
    
    // Function taking object by value and returning by value
    MyClass createCopy(MyClass obj) const;

    // Function taking object by reference and returning by reference
    MyClass& modifyAndReturn(MyClass& obj);
};

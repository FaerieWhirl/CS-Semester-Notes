#include<iostream>
#pragma once

struct MyStruct {
    int member1;
    int member2;
    //add default constructor with member initialization list
    MyStruct() : member1(0), member2(0) {}

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& os, const MyStruct& obj) {
        os << "MyStruct { member1: " << obj.member1 << ", member2: " << obj.member2 << " }";
        return os;
    }


    // Overload >> operator
    friend std::istream& operator>>(std::istream& is, MyStruct& obj) {
        std::cout << "Enter member1: ";
        is >> obj.member1;

        std::cout << "Enter member2: ";
        is >> obj.member2;

        return is;
    }

};



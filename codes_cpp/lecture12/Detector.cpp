// Detector.cpp
#include "Detector.h"
#include <iostream>

unsigned int Detector::staticVar = 0;

Detector::Detector() {
    nonStaticVar = staticVar++;
    std::cout << "Constructor: " << this << " Non-Static Var: " << nonStaticVar << std::endl;
}

Detector::~Detector() {
    std::cout << "Destructor: " << this << " Non-Static Var: " << nonStaticVar << std::endl;
}

unsigned int Detector::getNonStaticVar() const {
    return nonStaticVar;
}

void Detector::setNonStaticVar(unsigned int value) {
    nonStaticVar = value;
}

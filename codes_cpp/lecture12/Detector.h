// Detector.h
#pragma once
#include <iostream>



// Detector.h
#ifndef DETECTOR_H
#define DETECTOR_H

class Detector {
private:
    unsigned int nonStaticVar;
    static unsigned int staticVar;

public:
    Detector();
    ~Detector();

    unsigned int getNonStaticVar() const;
    void setNonStaticVar(unsigned int value); // Add this member function
};

#endif // DETECTOR_H

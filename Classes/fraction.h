#pragma once
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator, denominator;
    static int instanceCount;

public:
    Fraction(int num = 0, int den = 1);
    ~Fraction();
    static int GetInstanceCount();
};

#endif
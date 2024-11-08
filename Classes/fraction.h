#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    void simplify();
    static int findGCD(int a, int b);

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            cout << "Error: Denominator cannot be zero. Setting to 1 by default." << endl;
            denominator = 1;
        }
        simplify();
    }

    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    void display() const;
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
};

#endif
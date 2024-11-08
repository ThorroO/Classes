#include "fraction.h"

int Fraction::findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplify() {
    int gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

void Fraction::display() const {
    cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::add(const Fraction& other) const {
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::subtract(const Fraction& other) const {
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}
#include "fraction.h"
using namespace std;

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) {
        cout << "Error: Denominator cannot be zero. Setting to 1 by default." << endl;
        denominator = 1;
    }
    simplify();
}

void Fraction::simplify() {
    int gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int Fraction::findGCD(int a, int b) {
    return b == 0 ? a : findGCD(b, a % b);
}

void Fraction::input() {
    cout << "Enter numerator\n\n--> ";
    cin >> numerator;
    cout << "Enter denominator\n\n--> ";
    cin >> denominator;
    if (denominator == 0) {
        cout << "Error: Denominator cannot be zero. Setting to 1 by default." << endl;
        denominator = 1;
    }
    simplify();
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

Fraction Fraction::multiply(const Fraction& other) const {
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::divide(const Fraction& other) const {
    if (other.numerator == 0) {
        cout << "Error: Cannot divide by zero. Returning the original fraction." << endl;
        return *this;
    }
    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return Fraction(num, denom);
}
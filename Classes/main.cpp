#include "fraction.h"
using namespace std;

int main() {
    Fraction frac1, frac2;

    cout << "Enter first fraction:" << endl;
    frac1.input();

    cout << "Enter second fraction:" << endl;
    frac2.input();

    cout << "Addition: ";
    frac1.add(frac2).display();

    cout << "Subtraction: ";
    frac1.subtract(frac2).display();

    cout << "Multiplication: ";
    frac1.multiply(frac2).display();

    cout << "Division: ";
    frac1.divide(frac2).display();

    return 0;
}
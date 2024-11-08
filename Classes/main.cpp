#include "point.h"
#include "fraction.h"
#include "student.h"
using namespace std;

int main() {
    Point p1(1, 2, 3);
    p1.display();

    Fraction f1(3, 4);
    Fraction f2(2, 5);
    Fraction result = f1.add(f2);
    cout << "Fraction result: ";
    result.display();

    Student John("John Doe", 1998, "+380686969696", "Kyiv", "Ukraine", "NUFT", "Kyiv", "Ukraine", 42);
    John.display();

    return 0;
}
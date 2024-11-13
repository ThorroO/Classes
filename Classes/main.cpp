#include <iostream>
#include "Geometry.h"
#include "Point.h"
#include "Fraction.h"
#include "Student.h"

using namespace std;

int main() {
    cout << "Rectangle area: " << Geometry::RectangleArea(5, 10) << endl;
    cout << "Square area: " << Geometry::SquareArea(4) << endl;
    cout << "Total area calculations: " << Geometry::GetCount() << endl;

    Point p1(1.0, 2.0, 3.0);
    cout << "Total points created: " << Point::GetInstanceCount() << endl;

    Fraction f1(3, 4);
    cout << "Total fractions created: " << Fraction::GetInstanceCount() << endl;

    Student s1("John Doe");
    cout << "Total students created: " << Student::GetInstanceCount() << endl;

    return 0;
}
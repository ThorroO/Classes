#include "Geometry.h"

int Geometry::count = 0;

double Geometry::TriangleAreaHeron(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    count++;
    return s * (s - a) * (s - b) * (s - c);
}

double Geometry::RectangleArea(double width, double height) {
    count++;
    return width * height;
}

double Geometry::SquareArea(double side) {
    count++;
    return side * side;
}

double Geometry::RhombusArea(double diag1, double diag2) {
    count++;
    return (diag1 * diag2) / 2.0;
}

int Geometry::GetCount() {
    return count;
}
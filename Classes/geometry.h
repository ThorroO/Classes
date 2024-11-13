#pragma once
#ifndef GEOMETRY_H
#define GEOMETRY_H

class Geometry {
private:
    static int count;

public:
    static double TriangleAreaHeron(double a, double b, double c);
    static double RectangleArea(double width, double height);
    static double SquareArea(double side);
    static double RhombusArea(double diag1, double diag2);
    static int GetCount();
};

#endif
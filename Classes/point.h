#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
private:
    int x, y, z;

public:
    Point() : x(0), y(0), z(0) {}
    Point(int x_val, int y_val, int z_val) : x(x_val), y(y_val), z(z_val) {}

    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }

    void setX(int x_val) { x = x_val; }
    void setY(int y_val) { y = y_val; }
    void setZ(int z_val) { z = z_val; }

    void display() const;
};

#endif
#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y, z;
    static int instanceCount;

public:
    Point(double x = 0, double y = 0, double z = 0);
    ~Point();
    static int GetInstanceCount();
};

#endif
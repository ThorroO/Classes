#include "Point.h"

int Point::instanceCount = 0;

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {
    instanceCount++;
}

Point::~Point() {
    instanceCount--;
}

int Point::GetInstanceCount() {
    return instanceCount;
}
#include "Fraction.h"

int Fraction::instanceCount = 0;

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    instanceCount++;
}

Fraction::~Fraction() {
    instanceCount--;
}

int Fraction::GetInstanceCount() {
    return instanceCount;
}
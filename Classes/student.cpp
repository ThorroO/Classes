#include "Student.h"
#include <cstring>

int Student::instanceCount = 0;

Student::Student(const char* name) {
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
    instanceCount++;
}

Student::~Student() {
    delete[] name;
    instanceCount--;
}

int Student::GetInstanceCount() {
    return instanceCount;
}
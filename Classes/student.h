#pragma once
#ifndef STUDENT_H
#define STUDENT_H

class Student {
private:
    char* name;
    static int instanceCount;

public:
    Student(const char* name);
    ~Student();
    static int GetInstanceCount();
};

#endif
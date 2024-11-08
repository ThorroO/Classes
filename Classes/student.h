#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char* name;
    int birthYear;
    string phone;
    string city;
    string country;
    string schoolName;
    string schoolCity;
    string schoolCountry;
    int groupNumber;

public:
    Student(const char* studName, int year, const string& studPhone, const string& studCity,
        const string& studCountry, const string& schName, const string& schCity,
        const string& schCountry, int group)
        : birthYear(year), phone(studPhone), city(studCity), country(studCountry),
        schoolName(schName), schoolCity(schCity), schoolCountry(schCountry), groupNumber(group) {
        name = new char[strlen(studName) + 1];
        strcpy_s(name, strlen(studName) + 1, studName);
    }

    Student() : name(nullptr), birthYear(0), groupNumber(0) {}

    ~Student() {
        delete[] name;
    }

    const char* getName() const { return name; }
    int getBirthYear() const { return birthYear; }
    string getPhone() const { return phone; }

    void display() const;
};

#endif
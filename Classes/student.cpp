#include "student.h"

void Student::display() const {
    cout << "Name: " << name << "\nBirth Year: " << birthYear << "\nPhone: " << phone
        << "\nCity: " << city << "\nCountry: " << country
        << "\nSchool: " << schoolName << "\nSchool City: " << schoolCity
        << "\nSchool Country: " << schoolCountry << "\nGroup Number: " << groupNumber << endl;
}
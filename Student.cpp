#ifndef STUDENT_CPP
#define STUDENT_CPP
#include "Person.h"


class Student:public Person

{
    protected:

        int numCredits;

    public:

        Student (string firstName, string lastName, int day, int month, int year, int numCredits) : Person(firstName, lastName, day, month, year)
        this->numCredits = numCredits;

        void setNumCredits(int numCredits)

        {
            this->numCredits = numCredits;
        }

        int getNumCredits()
        return numCredits;

};

#endif // STUDENT_CPP

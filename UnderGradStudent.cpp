#include "Student.cpp"


class UnderGradStudent : public Student

{
private:

    bool canGraduate;

public:

    UnderGradStudent(string first, string last, int day, int month, int year, int numCredits) : Student(first, last, day, month, year, numCredits)
    setCanGraduate();

    void setCanGraduate()
        {
            if (getNumCredits() >= 120)
                canGraduate = true;

            else
                canGraduate = false;

        }

    void setNumCredits(int numCredits)

        {

            this->numCredits = numCredits;
            setCanGraduate();

        }

    bool getCanGraduate()
    {
        return canGraduate;
    }

};

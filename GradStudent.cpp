
#include "Student.cpp"


class GradStudent:public Student
{
    private:

        bool canGraduate;

    public:

        GradStudent(string first, string last, int day, int month, int year, int numCredits) : Student(first, last, day, month, year, numCredits)
        {
            this->setCanGraduate();
        }

        void setCanGraduate()
        {
            if (getNumCredits() >= 30)
                can_graduate = true;

            else
                can_graduate = false;
        }

        bool getCanGraduate()
            return can_graduate;

        void setNumCredits(int numCredits)
            {
                this->numCredits = numCredits;
                setCanGraduate();
            }

};

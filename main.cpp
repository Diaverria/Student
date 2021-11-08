#include <iostream>
#include "Person.h"
#include "Student.cpp"
#include "GradStudent.cpp"
#include "UnderGradStudent.cpp"
using namespace std;



int main()
{

Person p1("Tony", "Stark", 1, 21, 1950);
UnderGradStudent u1("John", "Doe", 5, 12, 2001, 20);


cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;
cout << "\n\nUnder graduate students => \n";
cout << u1.getName() << " Birthdate: " << u1.getBirthdate() << ", Credits: " << u1.getNumCredits() << endl;

if(u1.getCanGraduate())
    {
        cout << "Student " << u1.getName() << " can be graduated...\n";
    }

else
    {
        cout << "Student " << u1.getName() << " can not be graduated...\n";
    }

UnderGradStudent u2("Peter", "Parker", 7, 6, 2004, 130);

cout << "\nGraduate students: \n";
cout << u2.getName() << " Birthdate: " << u2.getBirthdate() << ", Credits: " << u2.getNumCredits() << endl;

if (u2.getCanGraduate())
    {
        cout << "Student " << u2.getName() << " Can graduate...\n";
    }
else
    {
        cout << "Student " << u2.getName() << " Can not graduate...\n";
    }

return 0;

}




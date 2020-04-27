#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <array>

using namespace std;

class Student {
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddr;
        int age;
        DegreeProgram degreeProg;
        array<int,3> daysToComplete;

    public:
        Student(string aStudentID, string aFirstName, string aLastName, string aEmailAddr, int aAge, array<int,3> aDaysToComplete, DegreeProgram aDegreeProg);
        // Default constructor needed for classRosterArray instantiation 
        Student();
        
        void setStudentID(string aStudentID);
        void setFirstName(string aFirstName);
        void setLastName(string aLastName);
        void setEmailAddr(string aEmailAddr);
        void setAge(int aAge);
        void setDegreeProg(DegreeProgram aDegreeProg);
        void setDaysToComplete(array<int,3> aDaysToComplete);

        string getStudentID() { return studentID; }
        string getFirstName() { return firstName; }
        string getLastName() { return lastName; }
        string getEmailAddr() { return emailAddr; }
        int getAge() { return age; }
        DegreeProgram getDegreeProg() { return degreeProg; }
        int getDaysToComplete1() { return daysToComplete[0]; }
        int getDaysToComplete2() { return daysToComplete[1]; }
        int getDaysToComplete3() { return daysToComplete[2]; }

    void printer(string dataToPrint);
};

#endif
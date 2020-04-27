#include <iostream>
#include <string>
#include <array>
#include "student.h"

using namespace std;


    Student::Student(string aStudentID, string aFirstName, string aLastName, string aEmailAddr, int aAge, array<int,3> aDaysToComplete, DegreeProgram aDegreeProg) {
        setStudentID(aStudentID);
        setFirstName(aFirstName);
        setLastName(aLastName);
        setEmailAddr(aEmailAddr);
        setAge(aAge);
        setDegreeProg(aDegreeProg);
        setDaysToComplete(aDaysToComplete);
    }
    // Default constructor needed for classRosterArray instantiation 
    Student::Student(){ 
    }

    void Student::setStudentID(string aStudentID) {
        studentID = aStudentID;
    }
    void Student::setFirstName(string aFirstName) {
        firstName = aFirstName;
    }
    void Student::setLastName(string aLastName) {
        lastName = aLastName;
    }
    void Student::setEmailAddr(string aEmailAddr) {
        emailAddr = aEmailAddr;
    }
    void Student::setAge(int aAge) {
        age = aAge;
    }
    void Student::setDegreeProg(DegreeProgram aDegreeProg) {
        degreeProg = aDegreeProg;
    }
    void Student::setDaysToComplete(array<int,3> aDaysToComplete) {
        for (int i = 0; i < 3; i++) {
            daysToComplete[i] = aDaysToComplete[i];
        }
    }

void Student::printer(string dataToPrint) {
            if (dataToPrint.compare("Student ID") == 0) {
                cout << getStudentID();
            } else if (dataToPrint.compare("First Name") == 0) {
                cout << getFirstName();
            } else if (dataToPrint.compare("Last Name") == 0) {
                cout << getLastName();
            } else if (dataToPrint.compare("Email Address") == 0) {
                cout << getEmailAddr();
            } else if (dataToPrint.compare("Age") == 0) {
                cout << getAge();
            } else if (dataToPrint.compare("Degree Program") == 0) {
                switch (getDegreeProg()) {
                case 0:
                    cout << "SECURITY";
                    break;
                
                case 1:
                    cout << "NETWORK";
                    break;

                case 2:
                    cout << "SOFTWARE";
                    break;
                
                default:
                    cout << "Invalid Degree Program";
                    break;
                }
            } else if (dataToPrint.compare("Days To Complete") == 0) {
                cout << "[" << getDaysToComplete1() << ", " << getDaysToComplete2() << ", " << getDaysToComplete3() << "]";
            } else {
                cout << "Invalid Print Option" << endl;
            }
        }
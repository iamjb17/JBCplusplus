#include <iostream>
#include <string>
#include <array>
#include "roster.h"
#include <cstring>
#include <vector>
#include <sstream>


using namespace std;


Roster::Roster(array<string,5> aStudentData){
    Student* classRosterArray = new Student[5];

    for (int i = 0; i < aStudentData.size(); i++) {
        string currentString = aStudentData[i];
        vector<string> currentVec = parseString(currentString);

        int stuA;
        int daysInC1;
        int daysInC2;
        int daysInC3;
        stringstream fromStringtoInt(currentVec[4]);
        fromStringtoInt >> stuA;
        stringstream fromStringtoInt2(currentVec[5]);
        fromStringtoInt2 >> daysInC1;
        stringstream fromStringtoInt3(currentVec[6]);
        fromStringtoInt3 >> daysInC2;
        stringstream fromStringtoInt4(currentVec[7]);
        fromStringtoInt4 >> daysInC3;

        add(currentVec[0],currentVec[1], currentVec[2], currentVec[3], stuA, daysInC1, daysInC2, daysInC3, convertDP(currentVec[8]));
    }
}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    array<int,3> courseDaysArr = { daysInCourse1, daysInCourse2, daysInCourse3 };

    Student student(studentID, firstName, lastName, emailAddress, age, courseDaysArr, degreeprogram);
    student.setDaysToComplete(courseDaysArr);
    
    classRosterArray[count] = student;
    
    count++;
}

void Roster::printAll(){
    
    for (int i = 0; i < arrSize; i++) {
        classRosterArray[i].printer("Student ID");
        cout << "   ";
        cout << "First Name: ";
        classRosterArray[i].printer("First Name");
        cout << "   ";
        cout << "Last Name: ";
        classRosterArray[i].printer("Last Name");
        cout << "   ";
        cout << "Email Address: ";
        classRosterArray[i].printer("Email Address");
        cout << "   ";
        cout << "Age: ";
        classRosterArray[i].printer("Age");
        cout << "   ";
        cout << "DaysInCourse: ";
        classRosterArray[i].printer("Days To Complete");
        cout << "   ";
        cout << "Degree Program: ";
        classRosterArray[i].printer("Degree Program");
        cout << endl;
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < arrSize; i++) {
        if(classRosterArray[i].getStudentID().compare(studentID) == 0) {
            int total = classRosterArray[i].getDaysToComplete1() + 
                        classRosterArray[i].getDaysToComplete2() +
                        classRosterArray[i].getDaysToComplete3();
            float avg = total / 3.0;
            cout << avg << endl;
        }
    }
    
}

void Roster::printInvalidEmails() {
    for (int i = 0; i < arrSize; i++) { 
        if(classRosterArray[i].getEmailAddr().find(".", 0) == classRosterArray[i].getEmailAddr().npos
        || classRosterArray[i].getEmailAddr().find(" ", 0) != classRosterArray[i].getEmailAddr().npos
        || classRosterArray[i].getEmailAddr().find("@", 0) == classRosterArray[i].getEmailAddr().npos) {
            cout << "Invalid Email Address: ";
            classRosterArray[i].printer("Email Address");
            cout << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < arrSize; i++) {
        if (classRosterArray[i].getDegreeProg() == degreeProgram) {
            classRosterArray[i].printer("Student ID");
            cout << " ";
            classRosterArray[i].printer("First Name");
            cout << " ";
            classRosterArray[i].printer("Last Name");
            cout << " ";
            classRosterArray[i].printer("Email Address");
            cout << " ";
            classRosterArray[i].printer("Age");
            cout << " ";
            classRosterArray[i].printer("Days To Complete");
            cout << " ";
            classRosterArray[i].printer("Degree Program");
            cout << endl;
        } 
     }
}

void Roster::remove(string studentID) {
    bool wasFound = false;

    for(int i = 0; i < arrSize; i++) {
        if(classRosterArray[i].getStudentID().compare(studentID) == 0) {
            cout << "made it into the if: " << endl;
            for (int j = i; j < arrSize-1; j++) {
                classRosterArray[j] = classRosterArray[j + 1];
            }
            wasFound = true;
            arrSize--;
        }
    }
    if(wasFound == false) {
        cout << "No student in the roster with that ID" << endl;
    } 
}

vector<string> parseString(string currentString) {
    vector <string>strgVr;
    char holdCString[currentString.size() + 1];
    strcpy(holdCString, currentString.c_str());
    char * token = strtok(holdCString, ",");
    while (token != NULL) { 
        strgVr.push_back(token);
        token = strtok(NULL, ","); 
    } 

    return strgVr;
}

DegreeProgram convertDP(string strToConvert) {
    if(strToConvert == "SECURITY") {
        return SECURITY;
    } else if (strToConvert == "NETWORK") {
        return NETWORK;
    } else {
        return SOFTWARE;
    }
}

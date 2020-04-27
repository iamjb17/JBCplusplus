#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;


class Roster {
    public: 
        Roster(array<string,5> aStudentData);
        
        int arrSize = 5;
        int count = 0;
        Student* classRosterArray = new Student[5];
        
        void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeprogram);
};

vector<string> parseString(string currentString);

DegreeProgram convertDP(string strToConvert);

#endif

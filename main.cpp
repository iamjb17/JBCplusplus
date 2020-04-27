#include "degree.h"
#include "student.cpp"
#include "roster.cpp"

using namespace std;

const array<string,5> studentData = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Jessie,Burton,jbur352@my.wgu.edu,32,7,15,9,SOFTWARE" };


// This is where the program starts and runs
int main() {

    cout << "Jessie Burton - #001356971" << endl;
    cout << "SCRIPTING AND PROGRAMMING - APPLICATIONS — C867 using C++" << endl;
    Roster classRoster(studentData);
    classRoster.printAll();
    classRoster.printInvalidEmails();

    for (int i = 0; i < classRoster.arrSize; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i].getStudentID());
    }

    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}

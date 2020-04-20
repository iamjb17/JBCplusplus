// This is practice file just to get used to c++ again
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string charName = "Jess";
    string testString = "This is a test string";

    int JessAge = 32;
    int testNum = 22;
    double testDoub = 78.258;

    string inName;
    int numb1, numb2, numb3;

    // single quotes for char double quotes marks for string
    char grade = 'A';
    // a double goes to more dec numbers or is more exact. just use double most of the time
    float decNum1 = 22.45;
    double decNum2 = 14.7896;
    bool home = true;
    bool atWork = false;

    int luckyNumbs[] = {4, 8, 33, 56};
    int luckyNumbs2[4];
    luckyNumbs2[2] = 34;

    
    cout << "Hello, World. My Name is " << charName << " and I am "<< JessAge << " years old."<< endl;
    cout << charName.length() << endl;
    cout << charName[2] << endl;
    cout << testString.find("test", 0) << endl;
    cout << pow(testNum,2) << endl;
    cout << fmin(3, 10) << endl;
    cout << endl;

    /* A little calculator program.

    cout << "Enter first number: ";
    cin >> numb1;
    cout << "Enter second number: ";
    cin >> numb2;
    cout << numb1 + numb2;
    cout << endl;
    
    */

    /* Here is how you take strings from users on terminal
    
    cout << "Enter Your Name: ";
    getline(cin, inName);
    cout << "Hello " << inName << endl;

    */

 // End of Day 1, 1:20 next is functions

    return 0;
}
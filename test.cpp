// This is practice file just to get used to c++ again
#include <iostream>
#include <string>
#include <cmath>
#include <array>

using namespace std;

/* 
This is a function stub. You need stubs if you are going to
put the functions after the main function.
*/ 
void sayHi(string name);
double cubeNumb(double numb);

int getMax(int numb1, int numb2, int numb3) {
    int result;
    if(numb1 >= numb2 && numb1 >= numb3) {
        result = numb1;
    } else if(numb2 >= numb1 && numb1 >= numb3) {
        result = numb2;
    } else {
        result = numb3;
    }
    
    return result;
}

string getDayOfWeek(int dayNumb) {
    string dayName;
    switch(dayNumb) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        default:
            dayName = "Invalid day";
            break;
    }

    return dayName;
}

// Class- The blueprint + the constructor function-function that gets called when object created
// Constructor can initialize our object for us. Can have multiple constructors
class Book {
    // private class variables are variables you want to not let anyone access frivilously 
    private:
    int section;

    public:
        string title;
        string author;
        int numbPages;
    // Note how this constructor takes in a section and passes it to the setter
    Book(string name, string aTitle, string aAuthor, int aNumbPages, int aSection) {
        cout << name << " created an object" << endl;

        title = aTitle;
        author = aAuthor;
        numbPages = aNumbPages;
        setSection(aSection);
    }
    Book() {

    }

    /*
    This is how you set a private class variable and place some restrictions
    on what kind of data can go into it.
    */
    void setSection(int aSection) {
        if(aSection == 1 || aSection == 2 || aSection == 3){
            section = aSection;
        } else {
            cout << "Not a valid Section" << endl;
        }
    };
    // This his how main or anything else will access section
    int getSection() {
        return section;
    };

    bool hasRead() {
        if(numbPages > 100){
            cout << "This book has been read" << endl;
        } else {
           cout << "Nobody likes this book" << endl; 
        }
        
    }
};

// inheritance and extending functionality
class Dictionary : public Book {
    public:
        void lookupWord() {
            cout << "Just ask google" << endl;
        }
        // Can override fuctions of the super/parent class
        bool hasRead() {
        if(numbPages > 800){
            cout << "This book has been read" << endl;
        } else {
           cout << "Nobody likes this book" << endl; 
        }
        
    }
};


int main() {
    // Object- what the class blueprint builds + using the constructor
    Book book1("jessie", "Goose Bumbs", "R.L. Stein", 120, 2);
    // book1.title = "Goose Bumbs";
    // book1.author = "R.L. Stein";
    // book1.numbPages = 120;
    Dictionary dict;
    dict.lookupWord();

    cout << book1.title << " " << book1.numbPages << endl;
    book1.hasRead();
    cout << book1.getSection() << endl;


    string charName = "Jess";
    string testString = "This is a test string";

    int JessAge = 32;
    int testNum = 22;
    double testDoub = 78.258;
    int index = 1;
    int secretNumb = 4;
    int guess;
    int guessCount = 0;

    string inName;
    int numb1, numb2, numb3;
    char oper;

    // single quotes for char double quotes marks for string
    char grade = 'A';
    // a double goes to more dec numbers or is more exact. just use double most of the time
    float decNum1 = 22.45;
    double decNum2 = 14.7896;
    bool home = true;
    bool atWork = false;
    bool isBusy = false;

    int luckyNumbs[] = {4, 8, 33, 56};
    int luckyNumbs2[4];
    luckyNumbs2[2] = 34;
    // A matrix and nested for loop that goes through it. 2d arrays need number of items in array
    /*
     numberGrid1[3][2] = {
        {1, 2}, {3, 7}, {8, 6}
    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numberGrid1[i][j];
        }
        cout << endl;
    }
    */
    
   
   
/*
    cout << "Hello, World. My Name is " << charName << " and I am "<< JessAge << " years old."<< endl;
    cout << charName.length() << endl;
    cout << charName[2] << endl;
    cout << testString.find("test", 0) << endl;
    cout << pow(testNum,2) << endl;
    cout << fmin(3, 10) << endl;
    cout << endl;
*/

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

// End of Day 1, 1:20 next is functions *********************

    /* 
    funct calls/usage
    sayHi("Jess");
    double answer = cubeNumb(5.0);
    cout << answer << endl;
    cout << getDayOfWeek(4);
    */

    /*
     remember your && and || and ! operators if needed
    if(atWork) {
        cout << "You are not at work";
    } else if(!isBusy && home) {
        cout << "You are at home and not busy";
        } else {
        cout << "You are not at home";
    }
    */


   /* More powerful calculator
   cout << "Enter First Number: ";
   cin >> numb1;
   cout << "Which Operator? ";
   cin >> oper;
   cout << "Enter Second Number: ";
   cin >> numb2;
    if(oper == '+') {
        cout << numb1 + numb2;
    } else if(oper == '-') {
        cout << numb1 - numb2;
    } else if(oper == '*') {
        cout << numb1 * numb2;
    } else {
        cout << "Must enter either +, -, or * as the operator";
    }
   */

    /* while loops
    while(index <= 5) {
        cout << index << endl;
        index++;
    }

    do {
        cout << index << endl;
        index++;
    } while(index <= 5);
  
    while(secretNumb != guess){
        if(guessCount != 3){
            cout << "Enter Guess: ";
            cin >> guess; 
            cout << "Wrong Number" << endl;
            guessCount++;
        } else {
            cout << "Out of guesses, you lose" << endl;
            guess = secretNumb;
        }
    }
    cout << "You guessed correctly";
    */

    /*
    //for loops init the index, then check the index against the number times to loop, then increment index
   for(int i = 1; i <= 5; i++ ) {
       cout << i << endl;
   }
   for(int i = 0; i <= 3; i++) {
       cout << luckyNumbs[i] << endl;
   }
    */



// End of Day 2, 2:59 next is Pointers *********************

    // variables and their pointer variable. note the * is needed and using the same data type of the varible
    int age = 32;
    int *pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Jessie";
    string *pName = &name;

    // Print out the pointer/memory address
    cout << pAge << endl;

    // Dereferencing a pointer is just getting the value thats there. * needed to get the value
    // at the pointer variable.
    cout << *pAge;

    // Classes and Objects

    return 0;
}

void sayHi(string name) {
    cout << "Hello " << name << endl;
}

double cubeNumb(double numb) {
    double result = numb * numb * numb;
    return result;
}
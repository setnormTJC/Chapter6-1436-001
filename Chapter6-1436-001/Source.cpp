
#include <iostream>

#include<cctype>
#include "myLibrary.h"

//#include""

int calculateSquare(int x) //if a function name consists of more than one word, make first word a 
                //VERB (action word)
{
    return x * x; //x^2 
}

using namespace std;

/// <summary>
/// 
/// </summary>
/// <param name="someInput"></param>
/// <returns></returns>
int return4(int someInput)
{
    return 4; 
}







int main()
{

    string result = calculateSquare(5); //ERROR! wrong return type
    cout << result << endl; 
    
    //displayHomePage(); //function call! Computer Organization/Architecture
    //sqrt(25) <cmath> 

    //cout << "Enter grades: " << endl; 

    //prompt the user for the grades: 
  
    //cout << sqrt(26) << endl; 
    //printHelloWorld(5); //calls the function named `printHelloWorld` (with the arg. = 5) 
    //cout << return4(31) << endl;
    //cout << return4(31) << endl;
    //cout << return4(31) << endl;

    ////string s = "hello123"; //s is an "object" of this thing called the "string class" 1437
    ////cout << s.length() << endl; 
    ////cout << sqrt(s) << endl;  //"operator overloading" -> COSC 1437 
    ////s.

    //cout << ceil(3.4) << endl; 

    //cout << ceil(-3.4) << endl;

    //cout << floor(3.4) << "\t" <<floor(-3.4) << endl;

    //cout << "Enter some LOWERCASE character (number): " << endl; 
    //char someChar; 

    //cin >> someChar; //getline

    ////C++ is "loosely-typed" programming language (Java is more strict) 
    //cout << "The upper case equivalent of that is : " << (char)toupper(someChar) << endl; 
    //
    //
    //if (isupper(someChar))
    //{
    //    cout << "That was UPPER case!" << endl; 
    //}

    //else
    //{
    //    cout << "Lower case ..." << endl; 
    //}
    //if (isdigit(someChar))
    //{
    //    cout << "You entered a DIGIT!" << endl; 
    //}
    //
    //else if (isalpha(someChar))
    //{
    //    cout << "You entered a letter" << endl; 
    //}

    //else
    //{
    //    cout << "Neither a digit nor a character" << endl; 
    //}

    return 0;
}
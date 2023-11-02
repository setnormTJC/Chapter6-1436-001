
#include <iostream>

#include<cctype>

using namespace std;

int return4()
{
    return 4; 
}



void printHelloWorld(int numberOfTimesToPrint) //function header/signature
{
    //function definition/body:
    for (int i = 0; i < numberOfTimesToPrint; i++)
    {
        cout << "Hello, world!" << endl; 
    }
}

int main()
{
    //cout << sqrt(26) << endl; 
    printHelloWorld(5); //calls the function named `printHelloWorld` (with the arg. = 5) 
    //cout << return4() << endl; 
    //cout << return4() << endl;
    //cout << return4() << endl;

    //string s = "hello123"; //s is an "object" of this thing called the "string class" 1437
    ////cout << s.length() << endl; 
    ////cout << sqrt(s) << endl;  //"operator overloading" -> COSC 1437 
    ////s.

    //cout << ceil(3.4) << endl; 

    //cout << ceil(-3.4) << endl;

    //cout << floor(3.4) << "\t" <<floor(-3.4) << endl;

    //cout << "Enter some LOWERCASE character (number): " << endl; 
    //char someChar; 

    //cin >> someChar; //getline

    //cout << "The upper case equivalent of that is : " << (char)toupper(someChar) << endl; 
    
    
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
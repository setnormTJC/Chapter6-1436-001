#include <iostream>

using namespace std;


//boolean flags (setting) 
bool isSameStringLength(string firstString, string secondString)
{

    //return (firstString.length() == secondString.length());

    if (firstString.length() == secondString.length()) //"string" 

    {
        return true; 
    }

    else //means the two strings are NOT the same length 
    {
        return false; 
    }
}


//global variable: 
string distinctiveName = "Jabberwock";

void printGreeting()
{
    //string distinctiveName = "Jabberwock";

    cout << "Hello, " << distinctiveName << endl; 
}

int main()
{
    //cout << distinctiveName << endl; 
    //string s1 = "abcdefgh"; 
    //string s2 = "123456789";
    //
    //cout << std::boolalpha << isSameStringLength(s1, s2) << endl; 

    int a = 5; 
    int& aliasOfA = a; //REFERENCE variable 
    int copyOfA = a; 

    cout << "a: " << a << 
        "\tAlias of a: " << aliasOfA <<
        "\tCopy of a: " << copyOfA << endl;
    
    a = 62; 
    cout << "AFTER updating a (the original): " << endl; 
    cout << "a: " << a <<
        "\tAlias of a: " << aliasOfA <<
        "\tCopy of a: " << copyOfA << endl;


        //if (a < 0 && a > 10)



    return 0;
}
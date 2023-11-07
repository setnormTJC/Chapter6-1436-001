#pragma once

#include<iostream>

using namespace std; 

void displayHomePage(/*no args here*/) //function header
{
    //next 5 lines are function definition
    cout << "This is the home page.\n";
    cout << "From here, you can: \n";
    cout << "1) Scroll through feed\n";
    cout << "2) View direct messages\n";
    cout << "3) etc.\n";


    //return 0;
    //GUIs
}

/// <summary>
/// This function prints hello world a certain number of times
/// </summary>
/// <param name="numberOfTimesToPrint">it's an integer that specifies print count </param>
void printHelloWorld(int numberOfTimesToPrint) //function header/signature
{
    //function definition/body:
    for (int i = 0; i < numberOfTimesToPrint; i++)
    {
        cout << "Hello, world!" << endl;
    }
}
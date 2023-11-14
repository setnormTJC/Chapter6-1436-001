#include <iostream>

using namespace std;

//template functions
template <typename T>  //"generic programming"
T functionName(T input)
{
    return input + input; 
}



int main()
{

    main(); //main is "recursive" because it calls itself!


/*    int char string */ 
    auto result = functionName(5.0);
    //string a = "qwerty";
    cout << typeid(result).name() << endl;

    cout << typeid("asdfasdf").name() << endl;

    cout << typeid('a').name() << endl; 
    //cout << functionName(a) << endl; 

    //cout << "Hello World";

    return 0;
}
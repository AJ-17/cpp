#include <iostream>

using namespace std; // if we don't use these then we need to use std::cout

int main(){
    const int radius=22;
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    float f=5.3;    //float vs. double The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

    float sn =5e10; // 5 * 10^10  we can use E also 

    char myLetter = 'D';         // Character
    string name = "Hello";     // String (text)
    string name1= "hello";
    bool myBoolean = true;       // Boolean (true or false)
    cout << "Hello World!\n";
    cout << "area of circle with radius  : "<<radius <<"is"<<3.14*radius * radius;
    cout << "\nEnter your name : ";
    cin >> name;
    cout <<name1<< " Mr. "<<name;
    return 0;
}


/*
Hello World!
area of circle with radius  : 22is1519.76
Enter your name : anshu
hello Mr. anshu
*/
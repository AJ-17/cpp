/*
C: ❌ No function overloading (functions must have unique names).
C++: ✅ Supports function overloading (multiple functions with the same name but different parameters).
*/
// Function overloading in C++ does not redefine a function. Instead, it allows multiple functions with the same name but different parameter lists (different number or types of parameters). The compiler determines which function to call based on the arguments provided.
#include <iostream>

using namespace std;
void print(int x) { cout << "Integer: " << x << endl; }
void print(double x) { cout << "Double: " << x << endl; }
void print(string x) { cout << "String: " << x << endl; }
int main(){
    print("hi");
    print(1);
    print(1.2);
}

/*
output : 
String: hi
Integer: 1
Double: 1.2
*/
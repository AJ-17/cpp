#include <iostream>
#include <header.hpp>//always nclude the header(hpp) files n not cpp 
//popular location for header files like iostream
/*
└─$ echo $path
/usr/local/sbin /usr/sbin /sbin /usr/local/bin /usr/bin /bin /usr/local/games /usr/games /home/ak/.dotnet/tools
*/
int main(){
    

    std::cout <<sum(1,2);

    return 0;
}
// g++ main.cpp implementation.cpp -o o


/*
You said:
why i use "" for my header file and not <>

The difference between "" (double quotes) and <> (angle brackets) in #include directives is how the compiler searches for the header file:
1. #include "myheader.h" (Double Quotes)

    The compiler first looks for the file in the current directory (where your source file is located).
    If not found, it then searches in the standard system directories.
    Used for user-defined (custom) header files.

2. #include <myheader.h> (Angle Brackets)

    The compiler only searches in the standard system directories (like /usr/include in Linux or the default include paths in your compiler setup).
    Used for standard library headers (e.g., <iostream>, <vector>, <cmath>).

*/
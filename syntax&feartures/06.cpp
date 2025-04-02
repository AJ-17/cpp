#include <iostream>
using namespace std;

namespace f1{
    int x=1;
}
namespace f2{
    int x=2;
}
int main(){

     //namespace avoid name conflicts in large projects.
     //we can use the same name for different variables
    int x=0;
    cout <<"local x : "<<x<<endl;
    cout <<"f1 namespace x : "<<f1::x<<endl;
    cout <<"f2 namespace x : "<<f2::x<<endl;
//When you use using namespace xyz in C++, you are telling the compiler to bring all the symbols (functions, classes, variables, etc.) from the namespace xyz into the current scope. This allows you to use them without explicitly prefixing them with xyz::.

//thats why we shoud use using namespace std::cout and few more like stirng and cin 

/*

using xyz::abc; in C++ brings only the specific symbol abc from the namespace xyz into the current scope. This allows you to use abc directly without the xyz:: prefix, while still keeping the rest of the namespace untouched.

*/
    return 0;
}
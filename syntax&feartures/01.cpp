//fnx inside struct are allowed ;
#include <iostream>
using namespace std;

// C++ Example
struct Person {
    string name;
    int age;

    void introduce() {
        cout << "Hi, I'm " << name << "!" << endl;
    }
};
int main(){

    Person a={"anshu",19};
    cout << a.name<<endl;
    cout <<a.age<<endl;
    a.introduce();

    

    return 0;
}

/*
output 

anshu
19
Hi, I'm anshu!

*/
/*
#include <iostream>

using namespace std;
class {
    public:
        string name;
        int classes;
        int roll_no;
}a1,a2,a3;
int main(){
    a1.name="anshu";
    a1.classes=12;
    a1.roll_no=6092;
    cout << a1.name;
return 0;
}*/




//____________________________________________________________________________________________________________________________________________



/*
#include <iostream>

using namespace std;
class student{
    public:
        string name;
        int classes;
        int roll_no;
        void hello(){
            cout <<"hi";
        }
}a1;
int main(){
    a1.name="anshu";
    a1.classes=12;
    a1.roll_no=6092;
    cout << a1.name;

    student a2;

    a2.name="ak";
    a2.classes=12;
    a2.roll_no=6292;
    cout <<"\n"<<a2.name;

return 0;
}
*/




//__________________________________________________________________________________________________________________________________________




// #include <iostream>

// using namespace std;


// class MyClass {        // The class
//     public:              // Access specifier
//       void myMethod();   // Method/function declaration
// };

// // Method/function definition outside the class
// void MyClass::myMethod() {
//     cout << "Hello World!";
// }

// int main(){
//     MyClass myObj;     // Create an object of MyClass
//     myObj.myMethod();  // Call the method
//     return 0;
// return 0;
// }



//___________________________________________________________________________________________________________________________________________




// #include <iostream>

// using namespace std;

// int main() {
//     class Car {        // The class
//     public:          // Access specifier
//       string brand;  // Attribute
//       string model;  // Attribute
//       int year;      // Attribute
//       Car(string x, string y, int z) { // Constructor with parameters
//         brand = x;
//         model = y;
//         year = z;
//       }
// };
//     // Create Car objects and call the constructor with different values
//     Car carObj1("BMW", "X5", 1999);
//     Car carObj2("Ford", "Mustang", 1969);
//     // Print values
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//     return 0;
//       }



//___________________________________________________________________________________________________________________________________________

// #include <iostream>

// using namespace std;

// class Car {        // The class
//   public:          // Access specifier
//     string brand;  // Attribute
//     string model;  // Attribute
//     int year;      // Attribute
//     Car(string x, string y, int z); // Constructor declaration
// };

// // Constructor definition outside the class
// Car::Car(string x, string y, int z) {
//   brand = x;
//   model = y;
//   year = z;
// }

// int main() {
//   // Create Car objects and call the constructor with different values
//   Car carObj1("BMW", "X5", 1999);
//   Car carObj2("Ford", "Mustang", 1969);

//   // Print values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;




//_________________________________________________________________________________________________________________________________________




// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.






// #include <iostream>

// using namespace std;

// class MyClass {
//   public:    // Public access specifier
//     int x;   // Public attribute
//   private:   // Private access specifier
//     int y;   // Private attribute
// };

// int main() {
//   MyClass myObj;
//   myObj.x = 25;  // Allowed (public)
//   myObj.y = 50;  // Not allowed (private)
//   return 0;
// }


//___________________________________________________________________________________________________________________________________________






// #include <iostream>
// using namespace std;

// class Employee {
//   private:
//     // Private attribute
//     int salary;

//   public:
//     // Setter
//     void setSalary(int s) {
//       salary = s;
//     }
//     // Getter
//     int getSalary() {
//       return salary;
//     }
// };

// int main() {
//   Employee myObj;
//   myObj.setSalary(50000);
//   cout << myObj.getSalary();
//   return 0;
// }



//___________________________________________________________________________________________________________________________________________




// #include <iostream>

// using namespace std;

// class a1{
//     public:
//         int a;
// };
// class a2: public a1{
//     public:
//         int b;
// };


// int main(){
//     a2 d;
//     d.a=0;
//     d.b=1;
//     //d is a a2 variable still i can use the a character from the class a1 because the line :public a1 takes all the data of a1 from a1 ;
// return 0;
// }




//___________________________________________________________________________________________________________________________________________



// #include <iostream>

// using namespace std;

// // Base class (parent)
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };

// // Derived class (child)
// class MyChild: public MyClass {
// };

// // Derived class (grandchild)
// class MyGrandChild: public MyChild {
// };

// int main() {
//   MyGrandChild myObj;
//   myObj.myFunction();
//   return 0;
// }



//__________________________________________________________________________________________________________________________________________



// #include <iostream>

// using namespace std;

// // Base class
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };

// // Another base class
// class MyOtherClass {
//   public:
//     void myOtherFunction() {
//       cout << "Some content in another class." ;
//     }
// };

// // Derived class
// class MyChildClass: public MyClass, public MyOtherClass {
// };

// int main() {
//   MyChildClass myObj;
//   myObj.myFunction();
//   myObj.myOtherFunction();
//   return 0;
// }





//____________________________________________________________________________________________________________________________________________



// #include <iostream>

// using namespace std;

// // Base class
// class Employee {
//   protected: // Protected access specifier only these class and the niherent class can access it 
//     int salary;
// };

// // Derived class
// class Programmer: public Employee {
//   public:
//     int bonus;
//     void setSalary(int s) {
//       salary = s;
//     }
//     int getSalary() {
//       return salary;
//     }
// };

// int main() {
//   Programmer myObj;
//   myObj.setSalary(50000);
//   myObj.bonus = 15000;
//   cout << "Salary: " << myObj.getSalary() << "\n";
//   cout << "Bonus: " << myObj.bonus << "\n";
//   return 0;
// }


//___________________________________________________________________________________________________________________________________________




// #include <iostream>

// using namespace std;

// class base1{//base class
//     public:
//         void a(){
//             cout <<"base 1 a";
//         }
// };


// class base2: public base1{// derived class
//     public:
//         void a(){
//             cout <<"base 2 a";
//         }
// };


// int main(){
//     base2 var1;
//     var1.a();
// return 0;
// }

// //output base 2 a because the class will give preference to itself first then the base class 




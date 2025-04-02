//although we can just dump a full classes with its definations 
//but its not recommended we should just declare the class here and define it in the class.cpp
#include <string>
class student{
    public:
        student();
        ~student();
        void print_name();
        std::string name;
        int roll_no;
        int Class;
};
#include <string>
class student{
    public:
        student(std::string a);
        ~student();
        void print_name();
        std::string name;
        int roll_no;
        int Class;
};
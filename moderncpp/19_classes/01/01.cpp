// classes are user defined typed (UDT)
//int,flaot,char are primitive types builtin
#include <iostream>
class Student{
    //information hiding
    public:
    //bydefault data in classes is private and in strucrtures is private
        //avaliable everywhere

        //special actions
        //Actions -Constructor
        Student(){
            std::cout <<"Constructor"<<std::endl;
        }

        //special actions
        //Action - Destructor
        ~Student(){
            std::cout <<"Destructor"<<std::endl;
        }
    private:
        //hidden fields or attributes 
        //of out class
        std::string name;



    protected:

};
int main(){
    //An instance of a student 
    std::cout<<"Program starts"<<std::endl;
    
    {
        Student mike;
        //as name is in private so using mike.name will give a error
    }
    std::cout<<"Program ends"<<std::endl;
// Program starts
// Constructor
// Destructor   
// Program ends
    std::cout<<"Program Start"<<std::endl;
    Student* mike=new Student;
    //Constructor
    //destructor was not called as the memory was not freed
    //but if we use delete mike then destructor will be called
    std::cout<<"deleting mike from heap"<<std::endl;
    delete mike;
    std::cout<<"Program ends"<<std::endl;
    

    return 0;
}
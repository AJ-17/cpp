//multiple inheritance

#include <iostream>

class noncopyable{
    public:
    noncopyable()=default;
    noncopyable(const noncopyable&rhs)=delete;
    noncopyable& operator=(const noncopyable& rhs)=delete;
};
class Dog : public noncopyable{
    public:
    virtual void Bark(){
        std::cout<<"Dog::Bark\n";
    }
};

class Golden: public Dog{
    public:
    virtual void Bark() override{
        std::cout<<"Golden::Bark\n";
    }
};

class BorderCollie : public Dog{
    public:
    virtual void Bark() override{
        std::cout<<"BorderCollie::Bark\n";
    }
};

class Coltriver : public Golden,BorderCollie{
    public:
    void Bark() override{
        std::cout<<"Coltriver::Bark\n";
    }
};
//please watch these once 
//https://www.youtube.com/watch?v=FncNE2vdtwQ
int main(){
    Dog dog;
    Golden golden;
    BorderCollie bordercollie;
    Coltriver coltriver;


    dog.Bark();
    golden.Bark();
    bordercollie.Bark();
    coltriver.Bark();

    /*
    Dog::Bark
    Golden::Bark
    BorderCollie::Bark
    Coltriver::Bark    
    */
    Dog* d=&dog;
    Dog* g=&golden;
    Dog* b=&bordercollie;

    //Dog* c=&coltriver will give  ambiguous base  error as it won't be able to decide that which class is assigned to c eg dog->golden->coltriver or dog->bordercollie->coltriever
    Golden* c=&coltriver;


    d->Bark();
    g->Bark();
    b->Bark();
    c->Bark();
    /*
    Dog::Bark
    Golden::Bark
    BorderCollie::Bark
    Coltriver::Bark
    
    */



    //multiple inhererace should be avoid until we some specific feature 
    //eg 
    // for all the above class coping is not allowed as we made a parent class noncopyable which prevent it 

    // Golden g2=golden; these will give error 

}

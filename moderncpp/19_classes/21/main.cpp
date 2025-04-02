
#include <iostream>

/*
without virtual class 

Top       Top
|         |
Base1    Base2
\         /
 \       /
  Derived



with cirtual class

    Top
   /  \
  /    \
Base1  Base2
  \    /
   \  /
  Derived
*/

class Entity{
    public:
    int x{4},y{5};

};

class Warrior : virtual public Entity{
    public:
        int power{10};
};

class Goblin : virtual public Entity{
    public:
        int power{7};
};

class Player : public Goblin,public Warrior{

};

int main(){

    Player* mike=new Player;


    std::cout<<mike->x;



}
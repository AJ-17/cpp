#include <iostream>

class IRender{
    public:
        void Draw(){std::cout<<"IRender\n";}
        virtual void Update(){}

};

class OpenGL : public IRender{
    public:
        OpenGL(){
            Draw();
            ((IRender*)(this))->Draw();
        }
        void Draw(){
                std::cout << "OpenGL::Draw\n";
        }
};

int main(){
    OpenGL a;
}
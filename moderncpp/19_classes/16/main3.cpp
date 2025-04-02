#include <iostream>

class IRender{
    public:
        virtual void Draw(){std::cout<<"IRender\n";}

    // if we set these fnx =0 then its called a pure virtual fnx and now it becomes compulsory for us to override these fnx in child classes whose instance   is maded in the code 
        virtual void Update()=0;

        

};

class OpenGL : public IRender{
    public:
        void Draw() override{
                std::cout << "OpenGL::Draw\n";
        }
        void Update() override{

        }
};

class Vulkan : public IRender{
    public:
        void Draw() override{
                std::cout << "Vulkan::Draw\n";
        }
};

int main(){
    IRender* myRender=new OpenGL;
    // IRender* myRender=new Vulkan;

    myRender->Draw();
    myRender->Update();

}
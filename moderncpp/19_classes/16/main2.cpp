#include <iostream>

class IRender{
    public:
        virtual void Draw(){std::cout<<"IRender\n";}


        virtual void Update(){}

        

};

class OpenGL : public IRender{
    public:
        void Draw() override{
                std::cout << "OpenGL::Draw\n";
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
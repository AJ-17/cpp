
#include <string>
class High{
    public:
        High(std::string a) : h(a){}
    private:
        std::string h;
};
class Mid : public High{
    public:
    Mid(std::string a,std::string b): m(a) ,High(b){

    }
    private:
        std::string m;

};
class Low : public Mid{
    public:
    Low(std::string a0,std::string a1,std::string a2) : l(a0),Mid(a1,a2){

    }
    private:
    std::string l;
};
int main(){
    Low a("Low","Mid","High");
}
//const usage

/*
1> Read only ("immutable") variables eg const int n =4; now we can't change it 

2> Read only parameters eg we make a fnx void fnx(const int n){} so that we don;t change n by mistake

3>making all members in a member fnx read only
*/


//3 point in detail

class a{
    private:
        int a;
    public:

        //these const will make all the memebers of the class immutabel within these fnx 
        int Getvalues() const{
            return a;
        }
        void setvalue(int newV){
            a=newV;
        }

};

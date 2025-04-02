
class vector3{
    public:
        float x=0.0f,y=0.0f,z=0.0f;
};
class array{
    public:
        array();
        ~array();
        //in many cases we don't want to make copies of the classes so to do so we just use =delete so that the copy fnx is no more avaliable even the default one 
        // eg array(const array & rhs)=delete;//copy constructor
        array(const array & rhs);


        //copy assignemnt operator 
        //object is already constructed we are just making a copy later

         array&operator=(const array&rhs);
        // eg array&operator=(const array&rhs)=delete;

        void printdata();
        void SetData(int index,int value){
            data[index]=value;
        }

    private:
        int* data;
};
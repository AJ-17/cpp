#include <iostream>
using namespace std;

int main(){

    string a="anshu";
    string b="gahlyan";
    string ab=a+b;
    cout << ab;

    ab=a+' '+b; 
    cout<<'\n'<<ab;

    ab=a.append(b);
    cout<<'\n'<<ab<<'\n';
    
    
    
    
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length()<<'\n';
    // both are same 
    cout << "The length of the txt string is: " << txt.size()<<'\n';


    cout << "+ve Indexing is working in string : " << txt[0]<<'\n'; 
    cout << "+ve Indexing is working in string with at fnx : " << txt.at(23); 


    /*
    escape character
        
        \'	'	Single quote
        
        \"	"	Double quote
        
        \\	\	Backslash
    
    
    */


    /*
    #include <iostream>
    #include <string>
    // using namespace std; - Remove this line

    int main() {
      std::string greeting = "Hello";
      std::cout << greeting;
      return 0;
    }
    
    
    
    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)
    
    */
    return 0;
}


/*
anshugahlyan
anshu gahlyan
anshugahlyan
The length of the txt string is: 26
The length of the txt string is: 26
+ve Indexing is working in string : A
+ve Indexing is working in string with at fnx : X

 */
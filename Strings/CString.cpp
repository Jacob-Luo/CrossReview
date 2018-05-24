#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
/** This piece of code is for testing string lib functions in C++.
 * try boost lib :>)...
*/
int main(){
    string s = "  I am providing the code some experiments data...\n\n  ";
    //1, Converts this string to a new character array.
    const char* cc = s.c_str();
    for(char c : s){
        cout<<"*"<<c;
    }
    for(int i=0; i<strlen(cc); i++){
        char c = cc[i];
        cout<<"-"<<c; 
    }

    //2, Returns the char value at the specified index.
    cout<<"s[10]: "<<s[10]<<endl;
    cout<<"s.at(10): "<<s.at(10)<<endl<<endl<<"Extract a unsigned int vector: ";

    //3, get bytes from the string and rebuild string based part/whole bytes.
    vector<unsigned int> uii;
    for(char c:s){
        uii.push_back(c);
    }
    for(unsigned int ui: uii){
        cout<<ui<<" ";
    }
    
    //4, get length.
    cout<<"\n\nString size/length is: "<<s.size()<<endl;       

    //5, Returns the index within this string of the first occurrence of the specified substring.
    cout<<"\nWe find(\"ex\") at: "<<s.find("ex")<<endl;
    
    //6, With any leading and trailing whitespace removed.
    

    //7, Get substring
    cout<<"s.substr(10,10): "<<s.substr(10,10)<<endl;

    //8,Splits this string around matches of the given regular expression.       
    
    //9,To uppercase and lowercase.
    
    //startswith and endswith, equalsIgnoreCase. 
    //replaseAll 
    cout<<endl<<s.replace(10,10,"**RPLACED TEN CHAR**");

    return 0;
}
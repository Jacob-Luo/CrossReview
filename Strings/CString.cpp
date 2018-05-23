#include <iostream>
#include <string>
using namespace std;
/* This piece of code is for testing string function in C++.*/
int main(){
    string s = "My name is Jacob";
    for(char c: s){
        printf(" %c", c);
    }

    cout<<std::endl<<s<<endl;

    cout<<"The the 3rd char is: "<<s.at(3)<<endl;

    cout<<"The size of the string is:"<<s.size()<<endl;

    return 0;
}
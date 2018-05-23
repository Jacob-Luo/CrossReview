#include <iostream>
#include <string>
/* This piece of code is for testing string function in C++.*/
int main(){
    std::string s = "My name is Jacob";
    for(char c: s){
        printf(" %c", c);
    }

    std::cout<<std::endl<<s<<std::endl;

    std::cout<<"The the 3rd char is: "<<s.at(3)<<std::endl;

    std::cout<<"The size of the string is:"<<s.size()<<std::endl;

    return 0;
}
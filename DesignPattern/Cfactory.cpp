//Factory design pattern.
#include <iostream>
#include <string.h>
using namespace std;

class Cpets{
    public:
     virtual void info() =0;
     virtual ~ Cpets(){};
};

class Cdog:public Cpets{
    public: 
        void info(){
            cout<<"This is a dog."<<endl;
        }
};

class Ccat:public Cpets{
    public:
        void info(){
            cout<<"You got a cat."<<endl;
        }
        ~ Ccat(){
            cout<<"Deleting a cat."<<endl;
        }
};

class Cfactory{
    public:
    static Cpets* getApet(string petName){
        if("dog"== petName) return new Cdog();
        else if("cat" == petName) return new Ccat();
        else return NULL;
    }
};

int main(){
    Cpets* pet= NULL;
    pet = Cfactory::getApet("cat");
    pet->info();
    delete pet;
    return 0;
}
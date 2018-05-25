#include <iostream>
#include <string.h>

using namespace std;

class Csingle{
    private:
    Csingle(){}
    //static Csingle single; //wrong...
    // ~ Csingle(){
    //     delete this->ps;
    // }
    
    public:
    static Csingle* getSingle(){
        static Csingle single; //static variables only instantiate once.
        return &single;
    }
    void printSingle(){
        cout<<"I am Single -> "<< this <<endl;
    }
};

int main(){
    Csingle* p_single;
    p_single = Csingle::getSingle();
    p_single -> printSingle();

    Csingle* p_single2;
    p_single2 = Csingle::getSingle();
    p_single2 -> printSingle();
    
    cout<<"Is p_single2 pointing to the same object with p_single? ";
    string s = (p_single == p_single2)?"True":"False";
    cout<< s <<endl;

    return 0;
}
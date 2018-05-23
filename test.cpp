#include <iostream>
class Base{
    int a = 0;
    public: 
    void say(){
        printf("I am from Base3 - %d. \n", a);
    }
};

class Derived:public Base{
    int b = 1;
    public: 
    void say(){
        printf("I am from Derived3 - %d. \n", b);
    }
};
void fun(int& a, int& b){
        a = b;
    };

int main(){
    Base b;
    // b.a = 10;
    Derived d;
    Base *p = &d;
    p->say();

    // Let me define a function to verify the reference/pointer delivery.
    int aa = 0; int bb= 1;
    printf("The original aa/bb are: %d / %d \n", aa, bb);
    fun(aa, bb);
    printf("The disposed aa/bb are: %d / %d \n", aa, bb);    

    return 0;
    
}

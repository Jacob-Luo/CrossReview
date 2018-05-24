/** A simplified replication of the java version, 
 * one on one relation between 2 classses/objects,
 * without setters and getters. */

#include <iostream>
#include <string.h>

using namespace std;

class Cperson; //Declare the classed not yet defined.

class Ccollege{
    public:
    string name;
    Cperson* p_person; //Must use a pointer to incompleted defined classes.
    Ccollege(string name, Cperson* p_per){
        this -> name = name; // Unlike the java code we use -> operater here.
        this -> p_person = p_per;
    }
    Ccollege(){}
};

class Cperson{
    public:
    string name;
    Cperson* p_child;
    Ccollege* p_college;
    
    Cperson(string name, Ccollege* p_col, Cperson* p_child){
        this ->name = name;
        this ->p_college = p_col;
        this -> p_child = p_child;
    }
    Cperson(){}
};

int main(){
    Ccollege c1;
    Ccollege c2;
    Cperson per;
    Cperson child;

    per.p_child = &child;
    per.name = "Parent";
    per.p_college = &c1;

    child.name = "Child";
    child.p_child = NULL;
    child.p_college = &c2;

    c1.name = "ABC University";
    c1.p_person = &per;

    c2.name = "DEF College";
    c2.p_person = &child;

    cout<<"************************\n";
    cout<<per.name<<" attended "<<per.p_college->name<<endl;
    cout<<child.name<<" joined "<<child.p_college->name<<endl;

    cout<<c1.name<<" had a student named "<<c1.p_person->name<<endl;
    cout<<c2.name<<" welcomed a student named "<<c2.p_person->name<<endl;
    cout<<"************************\n";    

    return 0;
};
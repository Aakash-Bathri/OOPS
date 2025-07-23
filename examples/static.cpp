#include<bits/stdc++.h>
using namespace std;

class car{
// if you try to create the constructor without this public then it's going to be the error
// because we can't use the private constructor
// this is common in singleton or utility patterns
// it will make the class car a non-instantiable class
public:
    // here this static variable just declared
    static int variable;

    // C++ 17 introduced the inline definition and it simplifies the definition of static variables
    static inline int variable2 = 0;

    static void print(){
        cout << "This is the static method" << '\n';
    }

    car(){
        cout << "car's constructor has been called" << '\n';
    }
};

// we cannot initialize the static data member inside the
// class due to class rules and the fact that we cannot
// assign it a value using constructor
// we must define static variable before using
int car::variable = 2;




class stMember{
public:
    int val;
    stMember(int v = 10) : val(v){
        cout << "the stMember constructor has be executed" << '\n';
    }
};
class flight{
public:
    static stMember someVar;
    flight(){
        cout << "this is the statement from the flight constructor" << '\n';
    }
};

// intializes the someVar static data member(stMember)
// and its triggers the stMember constructor
stMember flight::someVar = stMember(11);

int main(){
    // uses the static method;
    car::print();

    cout << flight::someVar.val << endl;
    flight obj1;
    flight obj2;


    // all there of them shows the same value
    cout << obj1.someVar.val << endl;
    cout << obj2.someVar.val << endl;
    cout << flight::someVar.val << endl;
}


// interface concepts is only in java
// in cpp we can implement abstraction only using virtual function to overriding in class
// but in java we can implement using interface and overriding in class

// but we can simulate the interface in cpp


// abstraction using interface
#include<bits/stdc++.h>
using namespace std;

// basically the interface is contract
// we have to fullfill the entire methods in the child classes
// so we have simulated the interface in cpp like java but it's not exactly like interface
class Animal{
public:
    // these are abstract methods
    // can we have instance variables in interface in java? : NO
    // because all fields are implicitely public, static, and final
    // This meant that all acts like constants
    // in java if you try to make non-static means => error
    virtual void sound() = 0;
    virtual void eat() = 0;
};

class Dog : public Animal{
public:
    void sound() override{
        cout << "Dog is barking...." << endl;
    }
    void eat() override{
        cout << "Dog is eating bone..." << endl;
    }
};

class Cat : public Animal{
public:
    void sound() override{
        cout << "cat is making noice" << endl;
    }
    void eat() override{
        cout << "cat is drinking milk" << endl;
    }
};



// static method
class StaticMethodExplaination{
public:
    static void staticmethod(){
        cout << "This method can be printed even though the instance is not created" << endl;
    }
};



// default method
class Example{
public:
    void defaultMethod(){
        cout << "This is a default method" << endl;
    }
};

class Demo : public Example{

};

int main(){
    // this just use the staticmethod function without creating instance
    StaticMethodExplaination::staticmethod();

    // we can use the defaultMethod from the parent(example) due to inheritance
    Demo* obj = new Demo();
    obj->defaultMethod();


    // this is abstraction
    // by seeing the animal class we can get to know what are the functions 
    // but the Dog and Cat implementation is hidden
    Animal* dog = new Dog();
    Animal* cat = new Cat();
}
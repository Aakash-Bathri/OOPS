#include<bits/stdc++.h>
using namespace std;

// method overloading
class Calculator{
public:
    int add(int a, int b){
        return a + b;
    }

    // compilation error as the return type is different
    // return type can't be a differentiator

    // void add(int a, int b){
    //     cout << a + b;
    // }

    double add(double a, double b){
        return a + b;
    }
    int add(int a, int b, int c){
        return a + b;
    }
};

// method overriding
class Parent{
public:
    // static makes it works at compile time so that only it's not working for the overriding and raises and error
    static void print(){
        cout << "This is the statement from the static method from the parent class" << endl;
    }
    // we should virtual for the method we are going to override in the child class - this is runtime
    virtual void display(){
        cout << "This is the statement from the parent class";
    }
};
class Child: public Parent{
public:

    // gpt answer
    // C++ does not use @override like Java.
    // Instead, you should use the C++11 override keyword only for virtual functions. 
    // Since print() is static, it cannot be virtual, and hence override (or @override) is invalid here.
    // @override

    // we can't override the static method 
    // gpt answer
    // In C++, static methods belong to the class, not the object, and hence cannot be overridden.
    // What you're doing in Child::print() is hiding the static method in the base class, not overriding it.
    void print(){

        // this is calling the static method from the child
        // in java we often use super keyword but here we can't use the super keyword in java
        // because the static is compile time and super is runtime so it raise an error
        // to avoid in java we use the Parent.print() directly instead of super.print()
        Parent::print();

        cout << "This is the statement from the method which is tried to override the static method from the parent class";
    }

    // this is actually the overriding in cpp
    // before what you written like @override is invalid
    // this is the way we have to override the method and the same method must be virtual in the the parent class
    void display() override{
        cout << "This is the statement from the child class" << endl;
    }
};


int main(){
    Calculator* calc = new Calculator();

    // compile time polymorphism
    cout << calc->add(1, 2);
    cout << calc->add(5.0, 6.0);
    cout << calc->add(1, 2, 3);


    // dynamic binding - it involves the concept of inheritance - which happens at runtime
    // runtime polymorphism

    // this prints from the child class
    // Calling with an object directly (no pointer/reference):
    Child c;
    c.display();


    // this prints from the base class
    // Calling with a base class pointer or reference:
    // but when you add virtual keyword to the display method in the parent means
    // the child will executre even though you have implemented the base class pointer or reference
    Child* ch = new Child();
    ch->display();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Check about diamond problem due to abstraction
// Abstraction - hiding the implementation details of the car
// it's an abstract class and hiding the implementation details of the start()
// it is showing the required feature only.
// Java: abstraction can also be implemented using interface in java and class(overriding)
// Cpp: but in cpp we can only implement the abstraction using only class (virtual function and overriding)

class Car{
public:
    // abstract method
    // pure virtual class
    virtual void start() = 0; 
    // we add the this here every other subclass has to be ensure the airbags if not it will throw an error
    // virtual void ensureAirbags() = 0;
    void noice(){
        cout << "Noise....." << '\n';
    }
};

class Tesla: public Car{
public:
    void start() override{
        cout << "Tesla is starting noisy" << '\n';
    }
    // void printCarName(){
    //     cout << "Car is tesla" << '\n';
    // }
};

class RollsRoyce: public Car{
public:
    void start() override{
        cout << "RollsRoyce is starting silently" << '\n';
    }
};

int main(){
    // Car tesla;  // Error: Cannot instantiate abstract class

    // actually this is abstraction
    // Car* tesla = new Tesla();   // can actually implement like this also
    Car* tesla = new Tesla();
    tesla->start();
    tesla->noice();
    // tesla->printCarName();

    // but when using Car* tesla = new Tesla(); 
    // we can't implement tesla->printCarName as the method is not part of the car class
    // usually we should use the abstract class Car, the Car* tesla = new Tesla() is used 
    // imagine Tesla implementing the functionality of it's own but the Car class doesn't know it
    // then there will be an issue. 
    // usually we do assign to the abstract parent class - industry level practice

    Car* rollsRoyce = new RollsRoyce();
    rollsRoyce->start();
    rollsRoyce->noice();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


// we sholdn't create like this
// class Rectangle {
// public:
//     double calculateArea() { return length * breadth; }
// };

// class Circle {
// public:
//     double calculateArea() { return M_PI * radius * radius; }
// };


// we should even change the abstract class until it's most important
// if you want to change we can use subclass 
class Shape{
public:
    virtual double calculateArea();
};

class Rectangle : public Shape{
private:
    double length, breath;
public: 
    Rectangle(double length, double breath){
        this->length = length;
        this->breath = breath;
    }
    double calculateArea() override{
        return length * breath;
    }
};

class Circle : public Shape{
private:
    double radius;
public: 
    Circle(double radius){
        this->radius = radius;
    }
    double calculateArea() override{
        return M_PI * radius * radius;
    }
};
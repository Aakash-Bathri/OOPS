#include<bits/stdc++.h>
using namespace std;

class Flyable{
public:
    virtual void fly() = 0;
    virtual ~Flyable() = default;
};

class Swimmable{
public:
    virtual void swim() = 0;
    virtual ~Swimmable() = default;
};

// multiple inheritance
class Duck : public Flyable, public Swimmable{
public:
    void fly() override{
        cout << "Duck can fly" << endl;
    }
    void swim() override{
        cout << "Duck can swim" << endl;
    }
};
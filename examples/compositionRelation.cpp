#include<bits/stdc++.h>
using namespace std;

class Passport{
private:
    string name;
public: 
    Passport(string name){
        this->name = name;
    }
};

class Student{
private:
    string name;
    Passport* passport;
public: 
    Student(string name, string passport){
        this->name = name;
        // a class will have another class within it and the class will owns it
        // unlike the aggregation
        this->passport = new Passport(passport);
    }
};

int main(){
    Student student("Aakash", "0987654321");
}
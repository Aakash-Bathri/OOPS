#include<bits/stdc++.h>
using namespace std;


// Student owns a Passport object — tight coupling.
// The passport object is copied during construction.
// Suitable when the Passport does not outlive the Student.

// there also many - one, many - many relationships also

// one - one association relationship
class Passport{
private:
    string passport;
public:
    Passport() {} // default constructor
    Passport(string passport){
        this->passport = passport;
    }
    string getPassportNumber(){
        return passport;
    }
};
class Student{
private:
    string name;
    Passport passport; // tight association(object form)
public: 
    // we have to use the default constructor to use the below constructor
    Student(string name, Passport passport){
        this->name = name;
        this->passport = passport;
    }
    
    // we can use this without the default constuctor in the passport
    // Student(string name, Passport passport) : name(name), passport(passport){}

    void displayDetails(){
        cout << "Student name: " << name << endl;
        cout << "Passport no: " << passport.getPassportNumber() << endl;
    }
};

int main(){
    Passport passport("0987654321");
    Student student("Aakash", passport);
}
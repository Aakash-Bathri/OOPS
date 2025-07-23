#include<bits/stdc++.h>
using namespace std;

class Passport{
public:
    string passportNo;
    Passport(){}
    Passport(string passportNo){
        this->passportNo = passportNo;
    }
    string getPassportNo(){
        cout << "Passport: " << passportNo << endl;
    }
    Passport* clone(){
        return new Passport(this->passportNo);
    }
};

class Student{
public:
    string name;
    Passport* passport;
    Student(string name, Passport* passport){
        this->name = name;
        this->passport = passport;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        passport->getPassportNo();
    }
    Student* clone(){



        // only this statement make the difference between deep and shallow copy
        // here for the shallow we just have to return it directly but the 
        // deep copy you have to create the object for the "" Student and Passport ""
        // so for the deep copy we have to make the student and passport new object and return the object
        // if there are multiple object we have to clone each and every object new for the deep clone

        Student* studentClone = new Student(this->name, this->passport->clone());
        return studentClone;
    }
};

int main(){
    Passport* passport = new Passport("0987654321");
    Student* student1 = new Student("Aakash", passport);

    // Implicit Deep copy(Deep copy happens automatically when assigning or copying Student objects.)
    // less flexible even if you tried to convert to shallow we can't
    // No risk of memory leaks.
    // Slightly less performant if Passport is large and copying is frequent.

// this is deep when all the ""* are remove"" then only it's deep copy
    // Student student2 = student1;
    

    // flexible: we can choose between shallow and deep copy
    // we can model it to aggregation also 
    // Violates RAII unless you implement destructors carefully or use smart pointers.
    // difficult to debug and maintain unless we are going for the shallow copy
    Student* student2 = student1->clone();

    student1->getInfo();
    student2->getInfo();

    student2->name = "Lekha";
    student2->passport->passportNo = "1234567890";

    student1->getInfo();
    student2->getInfo();
}
// see about unique_ptr and shared_ptr if possible;

#include<bits/stdc++.h>
using namespace std;

class Passport{
public:
    string passportNo;
    Passport(string passportNo){
        this->passportNo = passportNo;
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
    Student* clone(){
        



        // only this statement make the difference between deep and shallow copy
        // here for the shallow we just have to return it directly but the 
        // deep copy you have to create the object for the "" Student and Passport ""
        // so for the deep copy we have to make the student and passport new object and return the object
        // if there are multiple object we have to clone each and every object new for the deep clone

        return new Student(this->name, this->passport);
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Passport: " << passport->passportNo << endl;
    }
};

int main(){
    Passport* passport = new Passport("0987654321");
    Student* student1 = new Student("Aakash", passport);

    Student* student2 = student1->clone();

    student1->getInfo();
    student2->getInfo();

    student2->name = "Lekha";
    student2->passport->passportNo = "1234567890";

    student1->getInfo();
    student2->getInfo();
}
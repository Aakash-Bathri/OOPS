#include<bits/stdc++.h>
using namespace std;


class Passport{
private:
    string passportNo;
public:
    Passport() {} // default constructor
    Passport(string passportNo){
        this->passportNo = passportNo;
    }
};

class Student{
private:
    string name;
    Passport* passport;
public:
    Student(string name, Passport* passport){
        this->name = name;
        this->passport = passport;
    }
};  


int main(){
    Passport passport("1234567890");
    // even if the student get's deleted the passport will still be there - aggregation
    Student* student = new Student("Aakash", &passport);
}

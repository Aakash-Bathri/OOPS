#include<bits/stdc++.h>
using namespace std;

// super or parent class
class School{
private:
    string name;
public:
    // unlike last time this parent class requires some parameter for the constructor to work
    // so we have to make the sure that the child is passing the parameter required for the parent
    School(string name){
        this->name = name;
    }
    void printSchoolName(){
        cout << "School Name: " << name << '\n';
    }    
};

// sub or child class
class Student : public School{
private:
    string name;
public:
    // this change has to be done for the parents constructors to be work
    // if it's java we have to do the:    super(value)
    
    Student(string name, string schoolName) : School(schoolName){
        this->name = name;
    }
    void printStudentName(){
        cout << "Student Name: " << name << '\n';
    }
};

int main(){
    Student* student = new Student("Aakash", "DBS");
}
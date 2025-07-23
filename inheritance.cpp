#include<bits/stdc++.h>
using namespace std;


// multilevel
class Parent : public Student{
private:
    string name;
public:
    // if the Parent(string name, string studentName) only there
    // i got an issue which indicated that the Student(which is parent class of Parent) is not initialized
    // in order to avoid that issue add :Student(studentName)
    Parent(string name, string studentName) : Student(studentName){
        this->name = name;
    }
    void printParentName(){
        cout << "Parent Name: " << name << '\n';
    }
};

// heirearchiel 
class Teacher: public School{
private:
    string name;
    string subjectName;
public:
    Teacher(string name, string subjectName){
        this->name = name;
        this->subjectName = subjectName;
    }
    void printTeacherInfo(){
        cout << "Teacher Name: " << name << '\n';
        cout << "Subject: " << subjectName << '\n';
    }

};


// super or parent class
class School{
private:
    string name;
public:
    School(){
        name = "DPS";
    }
    void printSchoolName(){
        cout << "School Name: " << name << '\n';
    }    
    void demo(){
        cout << "This is the statement printed by school" << endl;
    }
};

// same as extend in java
// sub or child class
class Student : public School{
private:
    string name;
public:
    Student(string name){
        this->name = name;
    }
    void printStudentName(){
        cout << "Student Name: " << name << '\n';
    }


    // for overriding to be happen
    // the 2 methods from the parent has to be exactly same
        // 1. access specifiers should be same
        // 2. return type should be same
        // 3. the no. of parameter should be same
        // 4. the type of parameter should be same
        // 5. name must be same

    // code quality: without this also works but we are mentioning for the code quality
    @Override
    void demo(){
        // cout << "This is the statement printed by student" << endl;

        // if i call the demo call from the anywhere after initializing the student object.
        // i would get the statement printed by student

        // in java we can do like this super.demo(), super.attribute, super(10)
        // in cpp 
        // method accessing from parent:      School::demo()
        // attribute accessing from parent:   School::attribute
        // Directly call the constructor:     
            // class Child : public Parent {
            // public:
            //     Child() : Parent(10) {} 
            // };

        // here in this case the the demo function from the school also be printed
        School::demo();
        // here the overriding of the demo function from the school also overrided by the student
        cout << "This is the statement printed by student" << endl;
    }
};



int main(){
    Student* student = new Student("Aakash");
    Teacher* teacher = new Teacher("Teacher", "DSA");

}
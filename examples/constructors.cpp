#include<bits/stdc++.h>
using namespace std;


// default constructor - compiler creates constructor if there no constructor in the class
class sample{
public: 
};

// destructor - instance member function
// it is automatically invoked when the object is going to be destoyed
// last function that the object is going to call


// parameterized constructor
class example{
private:
    int x;
public:
    example(int x){
        this->x = x;
    }
    ~example(){
        cout << "Destructor called" << endl;
    }
};


// copy constructor
class Copy{
private:
    int val;
public:
    Copy(int x){
        val = x;
    }
    Copy(Copy& obj){
        this->val = obj.val;
    }
};


// move constructor
class Move{
private:
    int b;
public:
    Move(int &&a) : b(move(a)){
        cout << "Move constructor is called!" << endl;
    }
    void display(){
        cout << b << endl;
    }
};
int main(){
    int a = 4;
    Move obj(move(a));
    obj.display();   // 4 is the output
    return 0;
}




// default destructor will work fine unless we have dynamically allocated memory or pointer in class.
class myClass{
private:    
    int* data;
public:
    myClass(int value){
        data = new int;
        *data = value;
        cout << *data << endl;
    }
    // this is done to avoid memory leaks
    ~myClass(){
        delete data;
        cout << "Destructor: memory deallocated" << endl;
    }
};


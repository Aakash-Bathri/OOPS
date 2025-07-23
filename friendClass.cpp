#include<bits/stdc++.h>
using namespace std;

// a friend class can access the protected and private members of the other class
// where that class has mentioned this current using class as friend
// friendship is not mutual

class Aakash{
private:
    int privateVar;
protected:
    int protectedVar;
public:
    Aakash(){
        privateVar = 10;
        protectedVar = 99;
    }

    // for friend class
    friend class moulesh;

    // for friend function
    friend void friendFunction(Aakash& obj);
};

void friendFunction(Aakash& obj) {
    cout << obj.privateVar << endl;
    cout << obj.protectedVar;
}

class moulesh{
public:
    void display(Aakash& obj){
        cout << obj.privateVar << endl;
        cout << obj.protectedVar << endl;
    }
};

int main(){
    Aakash object1;
    moulesh obj2;
    obj2.display(object1);
    return 0;
}
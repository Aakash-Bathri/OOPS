#include<bits/stdc++.h>
using namespace std;

class sample{
public:
    virtual void sayHello();
    // we should use the destructor here to delete all the things when the program completes
    virtual ~sample();
};

int main(){
    // anonymous inner class
    // primary use case of it is to implement the contract(interface)
    class : public sample{
    public:
        void sayHello() override{
            cout << "Hey I am from the anonymous class" << endl;
        }
    }greeting;
    // without the class name we can create the object using interface
    greeting.sayHello();
}

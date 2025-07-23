#include<bits/stdc++.h>
using namespace std;

class outerClass{
public:
    int instanceVar = 32;
    void print(){
        cout << "Just checking ..." << endl;
    }
    class innerClass{
        outerClass* outer;
    public:
        innerClass(outerClass* o){
            outer = o;
        }
        void display(){
            // we can access all the members inside the outerclass
            cout << "this is the statement from the innerclass" << outer->instanceVar << endl;

            // example for access outerClass method
            outer->print();
        }
    };
};

int main(){
    outerClass* outer = new outerClass();
    // this will also work
    // outerClass::innerClass inner(outer);
    outerClass::innerClass* inner = new outerClass::innerClass(outer);
    inner->display();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class OuterClass{
public:
    static inline int val = 10;
    string name = "OuterClass";

    // wihout specifing static also it behaves like static class only and it's the only method 
    class InnerClass{
    public:
        void execute(){
            cout << "Inner class is executed" << val << endl;
        }
    };
};

int main(){
    // can create like this also but inner will be a pointer to object
    // OuterClass::InnerClass* inner = new OuterClass::InnerClass();

    // we just created the object and assigned object to inner
    OuterClass outer;
    // even it's static if we want to access any methods inside we have to create the class of it
    // then only we can use the innerClass
    // instance of outer class is not needed as well. above i just showed for fun
    OuterClass::InnerClass inner;
    // method execute works 
    // it will work if the val is "static val is used" and declared inside the class itself
    inner.execute();
}

 


// this is another way to access the innerClass through the outer class
class OuterClass{
public:
    static inline int val = 10;
    string name = "OuterClass";

    class InnerClass{
    public:
        void execute(){
            cout << "Inner class is executed" << val << endl;
        }
    };
    void execute(){
        // in this method we can create the same inner class and make it execute
        // the issue is we can't use the non-static method which is inside the static class.
        // for that you need to create an object and we can use it
        // InnerClass.execute();
        InnerClass inner;
        inner.execute();
    }
};
// int main(){
//     OuterClass outer;
//     outer.execute();
// }
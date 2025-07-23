#include<bits/stdc++.h>
using namespace std;

class outerClass{
public:
    static inline int val = 10;
    string name = "Aakash";

    void execute(){
        int x = 10;
        class innerClass{
        int innerVar;
        public:
            innerClass(int x){
                innerVar = x;
            }
            void execute(){
                // we can't use the x value here directly like java.
                // here val is accessible as it is static but we can't access x
                // due to Local classes in C++ cannot access local variables of the enclosing function
                // unless you are passing them as parameter

                cout << "this is from the innerClass" << " " << innerVar << endl;
            }
            // we can't change the value of the number so only it raises error
            // effectively final means not changed after afterwards
            // innerVar = 15;
        };
        innerClass* inner = new innerClass(x);
        inner->execute();
    }
};

int main(){
    // can use this also
    // outerClass outer;
    // outer.execute();

    // at the same time why this is working?
    outerClass* outer = new outerClass();
    outer->execute();
}
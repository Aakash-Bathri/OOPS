#include<bits/stdc++.h>
using namespace std;


// incorrect as penquin can't fly and raises and error

// class bird{
// public:
//     virtual void can_fly(){
//         cout << "I am flying" << endl;
//     }
// };

// class sparrow : public bird{
// public:
//     // can fly
// };

// class penquin : public bird{
// public:
//     void can_fly() override{
//         throw invalid_argument("We can't make the penquin fly");
//     }
// };


class bird{
public:
    virtual void eat(){
        cout << "I am eating" << endl;
    }
};
class flyable{
    virtual void fly();
};
class sparrow : public bird, flyable{
public:
    void fly() override{
        cout << "I am flying" << endl;
    }
};
class penquin : public bird{
public:
    // no fly method here
};


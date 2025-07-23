#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string name;
    double amount;
    BankAccount(string name, double amount){
        this->name = name;
        this->amount = amount;
    }
    void addBalance(double val){
        if(val > 0){
            amount += val;
        }else{
            throw invalid_argument("negative amount is not applicable");
        }
    }
    void withDrawBalance(double val){
        if(val > amount){
            throw invalid_argument("we can't remove balance more than it is there");
        }else{
            amount -= val;
        }
    }
};


int main(){
    try{
        BankAccount bank("Aakash", 100000);
        bank.addBalance(10000);
        bank.addBalance(-10000);        // get some error and go to catch block
        bank.withDrawBalance(200000);   // won't reach here
    }catch(exception &e){
        cout << "This is the exception: " << e.what() << endl;
    }
    
}
#include<bits/stdc++.h>
using namespace std;

// key points to remember whlie coding starter
// default values, encapulation, accessing, error handling

class Bank{
private:
    string name;
    double balance;
public:
    Bank(){
        name = "Aakash";
        balance = 1e10;
    }
    Bank(string name, double balance){
        this->name = name;
        this->balance = balance;
    }

    // getter and setter for data
    string getterName(){
        return name;
    }
    void setterName(string name){
        this->name = name;
    }
    double getterBalance(){
        return balance;
    }

    // error handling
    void addMoney(double amount){
        if(amount > 0){
            this->balance += amount;
        }else{
            cout << "Amount in negative" << endl;
        }
    }
    bool withdrawMoney(double withdraw){
        if(withdraw <= balance){
            this->balance -= withdraw;
            return true;
        }else{
            cout << "Low Balance" << endl;
            return false;
        }
    }
};


class Account{
private:
    string name;
    double balance;
public:
    // non parameterized constructor
    Account(){
        balance = 100;
    }
    // parameterized constructor
    // constructor overloading
    Account(string name, double balance){
        this->name = name;
        this->balance = balance;
    }
    Account(string name){
        this->name = name;
    }
    Account(double balance){
        this->balance = balance;
    }
    // copy constructor
    // Account* acc2(acc1);
    // why & is used and why this =>  Account acc2 = new Account(acc1) not working
    // this copy constructor does deep copy not shallow copy

    Account(Account &object){
        Account(object.name, object.balance);
    }

    int getBalance(){
        return balance;
    }
    string getName(){
        return name;
    }
};

int main(){
    Account* acc1 = new Account("Aakash", 10000000);
    // Account* acc2(acc1);
    Account* acc2 = new Account(*acc1);

    cout << acc1->getBalance() << endl;
}
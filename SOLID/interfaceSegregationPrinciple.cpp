#include<bits/stdc++.h>
using namespace std;

class Printer{
public:
    virtual void print();
};

class Scanner{
public:
    virtual void scan();
};

class BasicPrinter : public Printer{
public:
    void print(){
        cout << "Printing ....." << endl;
    }
};

class AllInOnePrinter: public Printer, Scanner{
public:
    void print(){
        cout << "Printing..." << endl;
    }
    void scan(){
        cout << "Scanning..." << endl;
    }
};
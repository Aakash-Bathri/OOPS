#include<bits/stdc++.h>
using namespace std;

class PaymentProcessor{
public:
    virtual void processPayment();
};

class CreditCardProcessor : public PaymentProcessor{
public:
    void processPayment() override{
        cout << "processing credit card payment" << endl;
    }
};

class UPIPaymentProcessor : public PaymentProcessor{
public:
    void processPayment() override{
        cout << "Processing UPI payment" << endl;
    }
};

class PaymentService{
private:    
    PaymentProcessor* processor;
public:
    PaymentService(PaymentProcessor* processor){
        this->processor = processor;
    }
    void makePayment(){
        processor->processPayment();
    }
};

int main(){
    PaymentProcessor* creditCard = new CreditCardProcessor();
    PaymentService* paymentservice = new PaymentService(creditCard);
    paymentservice->makePayment();
}
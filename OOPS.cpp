#include <iostream>
using namespace std;

/*
---------------------------------------------------
ABSTRACTION
---------------------------------------------------
Payment is an abstract base class.
It exposes only WHAT needs to be done (pay),
not HOW it is done.
*/
class Payment {
public:
    // Pure virtual function makes this class abstract
    // Every payment type must implement its own pay logic and this pay method needs to be overridden in derived classes.
    virtual void pay(double amount) = 0;

    // Virtual destructor ensures proper cleanup
    // when deleting derived objects using base pointer as it makes sure the destructor of the derived class is also called, preventing resource leaks.
    virtual ~Payment() {}
};

/*
---------------------------------------------------
INHERITANCE + POLYMORPHISM
---------------------------------------------------
CardPayment inherits from Payment
and provides its own implementation of pay() by overriding the pure virtual function.
*/
class CardPayment : public Payment {
protected:
    string cardNumber;    // specific to card payment
    string cardHolder;    // card holder name (encapsulation)

public:
    // Constructor initializer list initializes both members, it means when a CardPayment object is created, cardNumber and cardHolder are initialized with the values passed as parameters.
    CardPayment(string card, string holder)
        : cardNumber(card), cardHolder(holder) {}

    // this constructor initializer is an alternate form . we can also use this pointer to initialize the members like this :
    // CardPayment(string card, string holder) {
    //     this->cardNumber = card;
    //     this->cardHolder = holder;
    // }

    // providing implementation for the pure virtual function of base class thus doing runtime polymorphism. It is runtime polymorphism because the decision of which pay() function to call is made at runtime based on the actual object type (CardPayment or UpiPayment) that the base class pointer is pointing to.
    void pay(double amount) override {
        cout << "Paid " << amount << " using Card" << endl;
        cout << "Card Holder: " << cardHolder << endl;
    }
};

/*
Another derived class implementing Payment
*/
class UpiPayment : public Payment {
    string upiId;   // specific to UPI payment
    string userName; // UPI user name (encapsulation)

public:
    UpiPayment(string upi, string user) : upiId(upi), userName(user) {}  
    // It initializes class data members before the constructor body runs.
    // When a UpiPayment object is created, initialize upiId and userName with the values passed as parameters.

    void pay(double amount) override {
        cout << "Paid " << amount << " using UPI" << endl;
        cout << "UPI ID: " << upiId << ", User: " << userName << endl;
    }
};

/*
---------------------------------------------------
ENCAPSULATION
---------------------------------------------------
PaymentService encapsulates sensitive data like balance.
Direct access to balance is restricted using private access.
*/
class PaymentService {
private:
    double balance;   // hidden data (encapsulation)

public:
    // Constructor initializes balance
    PaymentService(double bal) : balance(bal) {}

    /*
    This function processes payment.
    It does not care about the payment type.
    It uses base class pointer (polymorphism).
    */
    void processPayment(Payment* payment, double amount) {
        if (amount <= balance) {
            payment->pay(amount);   // runtime polymorphism
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
};

int main() {

    // Creating payment service with initial balance
    PaymentService service(5000);

    /*
    Base class(payment) pointer pointing to derived class objects(cardPayment and UpiPayment).
    This enables polymorphism which means many forms through 1 interface
    */
    Payment* p1 = new CardPayment("1234-5678", "Abhishek Raj");
    Payment* p2 = new UpiPayment("user@upi", "Rohit Kumar");

    // Same function call, different behavior
    service.processPayment(p1, 1500);
    service.processPayment(p2, 2000);

    // Proper cleanup using virtual destructor
    delete p1;
    delete p2;

    return 0;
}

// This payment system demonstrates all four OOP pillars.
// Abstraction is achieved using the Payment interface which exposes only the pay() method.
// Encapsulation is used in PaymentService where balance is kept private and accessed only through controlled methods.
// Inheritance allows CardPayment and UpiPayment to reuse the common payment interface.
// Polymorphism allows the same pay() call to behave differently at runtime depending on the payment object.

// open oops.txt
#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:

    BankAccount();
    BankAccount(string name, double amount);
    void setName(string name);
    void deposit(double amount);
    void withdraw(double amount);
    string getName();
    double getBalance();

    private:

    string name;
    double balance;
};

int main(){
    BankAccount acc ( " Alice " , 1000.0) ;
    cout << " Name : " << acc . getName () << endl ;
    cout << " Initial Balance : " << acc . getBalance () << endl ;
    acc . deposit (500.0) ;
    cout << " After deposit : " << acc . getBalance () << endl ;
    acc . withdraw (200.0) ;
    cout << " After withdrawal : " << acc . getBalance () << endl ;
    acc . withdraw (2000.0) ; // Should not allow , balance unchanged
    cout << " After failed withdrawal : " << acc . getBalance () << endl
    ;
    acc . setName ( " Bob " ) ;
    cout << " Updated Name : " << acc . getName () << endl ;

    return 0;
}
BankAccount::BankAccount(){
    this->name = "N/A";
    this->balance = 0;
}
BankAccount::BankAccount(string name, double amount){
    this->name = name;
    balance = amount;
}
void BankAccount::setName(string name){
    this->name = name;
}
void BankAccount::deposit(double amount){
    if(amount > 0){
        balance += amount;
    }
}
void BankAccount::withdraw(double amount){
   if(balance >= amount && amount > 0){
    balance -= amount;
   }
}
string BankAccount::getName() {
    return name;
}
double BankAccount::getBalance(){
    return balance;
}
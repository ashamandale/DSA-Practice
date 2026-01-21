#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    double balance;

    public:
    BankAccount(int AccNo,double bal){
        accountNumber=AccNo;
        balance=bal;

    }
    void deposit(int amt){
        balance+=amt;
    }

    void withdraw(int amt){
        if(balance>=amt){
            balance-=amt;
        }
        else{
            cout<<"No sufficient Amount to withdraw in Account"<<endl;
        }
    }

   double getBalance(){
    return balance;
   }
};
   
int main(){
    BankAccount myAccount(123456,500.0);
    myAccount.deposit(200);
    myAccount.withdraw(900);
    cout<<"My Account current balance is :"<<myAccount.getBalance()<<endl;


    return 0;
}
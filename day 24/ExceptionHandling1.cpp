#include <iostream>
using namespace std;

class bankaccount{

public:    
  int balance;
  int deposit;
  int withdraw;
  int num;

  bankaccount(){
    balance = 8000;
    deposit = 0;
    withdraw = 0;
    num = 0;
  }

  void details(){
    cout<<"-------- KOTAK BANK --------"<<endl;
    cout<<"BALANCE = "<<balance<<endl;
    cout<<"1. Deposit"<<endl<<"2. Withdraw"<<endl;
  }

  void depo(){
    cout<<"Enter deposit amount = "; 
    cin>>deposit;
    if (deposit <= 0)
    {
        throw "------ENTER VALID DEPOSIT AMOUNT------";
    }
    else{
        balance += deposit;
        cout<<"BALANCE = "<<balance<<endl;
    }
  }

  void with(){
    cout<<"Enter withdraw amount = ";
    cin>>withdraw;
    if (withdraw > balance)
    {
        throw "------ENTER VALID WITHDRAW AMOUNT------";
    }
    else{
        balance -= withdraw;
        cout<<"BALANCE = "<<balance<<endl;
    } 
     
  }
};

int main() {

bankaccount a1;

try
{
    a1.details();
    a1.depo();
    a1.with();
}

catch(const char *e){
    
    cout<<"Exception Occured : "<<e<<endl;
}




 

}
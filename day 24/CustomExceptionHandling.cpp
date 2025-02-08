#include <iostream>
// #include <exception> // if code does not work of give some error add this exception class it is optional

using namespace std;

//custom exception class for deposit
class InvalidDeposit :public runtime_error{ 
public:

 InvalidDeposit(const string &msg) : runtime_error(msg){
 }

};

//custom exception class for withdraw
class InvalidWithdraw :public runtime_error{
public:

 InvalidWithdraw(const string &msg) : runtime_error(msg){
 }
};

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
        throw InvalidDeposit("------ENTER VALID DEPOSIT AMOUNT------");
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
        throw InvalidWithdraw("------ENTER VALID WITHDRAW AMOUNT------");
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

catch(const InvalidDeposit &e){
    
    cout<<"Exception Occured at line 45: "<<e.what()<<endl;
}

catch(const InvalidWithdraw &e){
    
    cout<<"Exception Occured at line 58: "<<e.what()<<endl;
}




 

}
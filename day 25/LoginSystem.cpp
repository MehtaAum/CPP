//file handling is for storing data in hdd or means local storage rather than just using it in ram

#include <iostream>
#include <fstream>
using namespace std;

class login{
public:

void data(string u , string p){

 ofstream a1;
 a1.open("LoginSystemData.txt",ios::app);//ios::app helps to dont overwrite things

 a1<<"username : "<<u<<endl;
 a1<<"password : "<<p<<endl<<endl;

 a1.close();

}

};

int main() {

string username;
string password;    

cout<<"________ ENTER YOUR USERNAME AND PASSWORD ________"<<endl<<endl;
cout<<"Username : ";
cin>>username;
cout<<"Password : ";
cin>>password;

login obj1;

obj1.data(username,password);


}
#include <iostream>
// #include <exception> // you can add this class if it showing some error

using namespace std;

int main() {

try
{
  int *arr = new int[1000000000000000];
  delete []arr;
}

catch(const exception &e){ //exception is class and there bad_alloc and all are child 
  cout<<"exception occured : "<<e.what()<<endl; //when you run this show which type of error are there so it is bad_alloc exception 
}



}
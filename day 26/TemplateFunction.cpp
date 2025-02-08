//function template are can use different data type for function only

#include <iostream>
using namespace std;

//function
template <typename t>

t hello(t a , t b , t c){
  return  a + b + c;;
}


int main(){

cout << hello(5 , 5 , 10)<<endl; //takes as an int
cout << hello(5.5 , 4.5 , 11.5)<<endl; //takes as an float

}
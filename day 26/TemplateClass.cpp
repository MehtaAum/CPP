//class template is for creating generic classes

#include <iostream>
using namespace std;

template <typename t>
class hello{
private:
  t num1;
  t num2;
public:

  hello(t num1 , t num2){
      this->num1 = num1;
      this->num2 = num2; 
  }

  void get(){
    cout<<"SUM OF NUM1 & NUM2 = "<<num1 + num2<<endl;
  }

};

int main() {
//<int> , <double> , <float> that i write it is to specify the datatype for compiler to understand
    hello<int> obj1(4,4); //takes as an int 
    obj1.get(); 

    hello<float> obj2(100.45 , 50.10);  //takes as an float
    obj2.get();

    hello<double> obj3(100.45 , 50.10);  //takes as an double
    obj3.get();
}
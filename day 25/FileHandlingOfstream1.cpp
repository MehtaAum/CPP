#include <iostream>
#include <fstream>//to add class of file handling
using namespace std;

int main() {

    ofstream obj1;//created object ofstream for write
    obj1.open("ofstream.txt");//naming file and opening

    obj1<<"hello world"<<endl;//writing code in that file
    obj1<<"my name is aum"<<endl;
    obj1<<"i love linux"<<endl;

    obj1.close();//closing file

}
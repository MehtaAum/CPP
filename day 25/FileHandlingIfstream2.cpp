//note :- there are some function in file handling like .open(), .close(), .eof(), .getline() etc...

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream a2;//ifstream for read file

    a2.open("ofstream.txt");//opening file

    char a;
    a = a2.get();//this read char by char but you want to read line then use .getline()

    while (!a2.eof())//ef means end of function
    {
        cout<<a;
        a = a2.get();//this is to consider tabs also and read char by char
        
    }
    

    a2.close();//closing 

}
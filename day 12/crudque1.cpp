#include <iostream>
using namespace std;

//create a menu-driven program to perform CRUD operations on given 1d array.

int main(){

    int user, pos;
     int size = 0;   
     cout<<endl<<"size = ";
     cin>>size; 
     int a[size];

    do
    {
     cout<<"( MENU FOR CRUD )"<<endl;   
     cout<<"- (1) Create record"<<endl;   
     cout<<"- (2) Read record"<<endl;   
     cout<<"- (3) Update record"<<endl;   
     cout<<"- (4) Delete record"<<endl;
     cin>>user;   

        switch (user)
        {
            case 0:
              cout<<"-----------------------------------------------------Exiting program. Goodbye!-----------------------------------------------------";
            break;
            case 1: cout<<"---------------------------------( Create record )---------------------------------"<<endl;
               { 


                    
                    cout<<endl;          

                    for (int i = 0; i < size; i++)
                    {
                        cout<<"a["<<i<<"] = ";
                        cin>>a[i];
                    }
                    
                }
                
            break;

            case 2: cout<<"---------------------------------( Read record )---------------------------------"<<endl;
               { 



                    for (int i = 0; i < size; i++)
                    {
                        cout<<a[i]<<"   ";
                    }

                }
                
            break;

            case 3: cout<<"---------------------------------( Update record )---------------------------------"<<endl; // both will work 1. is just overwritting 2. is updating value
               { 
                   
                    // for (int i = 0; i < size; i++)                                       
                    // {
                    //     cout<<"Enter index to change the element : ";
                    //      cin>>i;
                    //     cout<<"Enter element ["<<i<<"] : ";
                    //     cin>>a[i];
                    //     cout<<"Updated a ["<<i<<"] : ";
                    //     cout<<a[i]<<endl;
                    //     break;
                    // }


                  for (int i = 0; i < size; i++)
                   {

                       cout<<"Enter index to change the element : ";
                       cin>>i;

                        if (i >= 0 && i < size)//
                        {
                            cout<<"Enter element ["<<i<<"] : ";
                            cin>>a[i];
                            break;
                        }
                        else{
                            cout<<"invalid";
                        }
                    
                   }
                   
                    
                }
                
            break;

            case 4: cout<<"---------------------------------( Delete record )---------------------------------"<<endl;
               { 

                    cout<<"Enter index position to DELETE = ";
                    cin>>pos;
                    
                    for (int i = pos; i < size; i++)
                    {
                        a[i] = a[i + 1]; 
                    }
                    for (int i = 0; i < size-1; i++)
                    {
                        cout<<a[i]<<"   ";
                    }
                    cout<<endl;

                    size--;
    
                }
                
            break;
        
        default:
            cout<<"Invalid input! Try again.";
         break;
        }

    } while (user != 0);




}
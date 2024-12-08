#include <iostream>
using namespace std;

//make a telephone directory

int main(){
     
    int user, guj, hin, eng, subguj, subhin, subeng, id, plan, pay; 
    cout<<endl;
    cout<<"Gujarati mate 1 dabao !"<<endl;
    cout<<"Hindi ke liye 2 dabaye !"<<endl;
    cout<<"For english press 3 !"<<endl;
    cout<<"---------------------------------------------"<<endl;
    
    cout<<"PRESS : ";cin>>user;cout<<endl; 
    

    switch(user){
        // gujarti
       case 1:
         cout<<"Mahiti mate 1 dabao"<<endl;
         cout<<"Balance janva mate 2 dabao"<<endl;
         cout<<"Offers janva mate 3 dabao"<<endl;
         cout<<"Customer care officer sathe vaat karva mate 4 dabao"<<endl;
    cout<<"---------------------------------------------"<<endl;

         cout<<"PRESS : ";cin>>guj;cout<<endl; 

         switch(guj){
            case 1:
              cout<<"Tamaru recharge id che (459#1)"<<endl;  
              cout<<"Change karva mate 1 dabao"<<endl<<endl;
              cout<<"PRESS : ";cin>>subguj;cout<<endl; 
                
              switch(subguj){
                case 1:
                  cout<<"type your id here : ";  
                  cin>>id;  
                break;

                default:
                  cout<<"Error pls type again !";               
                break;
              }   

            break;         
            case 2:            
              cout<<"0 balance"<<endl;
              cout<<"(Recharge Choose karvo)"<<endl<<endl;
               cout<<"1. 299/-(1.5gb per day)"<<endl;
               cout<<"2. 699/-(2gb per day)"<<endl;
               cout<<"3. 1199/-(3gb per day + hotstar subscription free)"<<endl<<endl;

               cout<<"1. UPI"<<endl;            
               cout<<"2. GIFT CARD"<<endl;            
               cout<<"3. CREDIT CARD"<<endl<<endl; 

                  cout<<"PLAN NUMBER : ";cin>>plan;cout<<endl;   
                  cout<<"PAYMENT METHOD : ";cin>>pay;cout<<endl;   
                 

                   switch (plan)
                  {
                  case 1:
                      cout<<"(299/- RECHARGE DONE)"<<endl;
                    break;
                  case 2:
                      cout<<"(699/- RECHARGE DONE)"<<endl;
                    break;
                  case 3:
                      cout<<"(1199/- RECHARGE DONE)"<<endl;
                    break;
                  
                  default:
                      cout<<"Error pls type again !"<<endl;             
                    break;
                  }

                  switch (pay)
                  {
                  case 1:
                      cout<<"(PAYMENT THROUGH UPI IS DONE)"<<endl<<endl;
                    break;
                  case 2:
                      cout<<"(PAYMENT THROUGH GIFT CARD IS DONE)"<<endl<<endl;
                    break;
                  case 3:
                      cout<<"(PAYMENT THROUGH CREDIT CARD IS DONE)"<<endl<<endl;
                    break;
                  
                  default:
                      cout<<"Error pls type again !"<<endl<<endl;             
                    break;
                  }    
                                      
            break;         
            case 3:           
              cout<<"299/-(1.5gb per day), 699/-(2gb per day), 1199/-(3gb per day + hotstar subscription free)  "<<endl;              
            break;         
            case 4:           
              cout<<"Calling.........................."<<endl;              
            break;         
            default:
              cout<<"Error pls type again !";
            break;
         }
       break;
        // hindi
       case 2:
         cout<<"Mahiti ke liye 1 dabaiye"<<endl;
         cout<<"Balance check karne ke liye 2 dabaiye"<<endl;
         cout<<"Offers Janne ke liye 3 dabaiye"<<endl;
         cout<<"Customer care officer ke sath baat ke liye 4 dabaiye"<<endl;
    cout<<"---------------------------------------------"<<endl;         
          cout<<"PRESS : ";cin>>hin;cout<<endl; 

         switch(hin){
            case 1:
              cout<<"Apka recharge id hei(459#1)"<<endl;
               cout<<"Recharge id change karne ke liye 1 dabaiye"<<endl<<endl;
              cout<<"PRESS : ";cin>>subhin;cout<<endl; 
                
              switch(subhin){
                case 1:
                  cout<<"type your id here : ";  
                  cin>>id;  
                break;

                default:
                  cout<<"Error pls type again !";               
                break;
              }                             
            break;         
            case 2:          
              cout<<"0 balance"<<endl;
                cout<<"(Recharge Choose kare)"<<endl<<endl;
               cout<<"1. 299/-(1.5gb per day)"<<endl;
               cout<<"2. 699/-(2gb per day)"<<endl;
               cout<<"3. 1199/-(3gb per day + hotstar subscription free)"<<endl<<endl;

               cout<<"1. UPI"<<endl;            
               cout<<"2. GIFT CARD"<<endl;            
               cout<<"3. CREDIT CARD"<<endl<<endl; 

                  cout<<"PLAN NUMBER : ";cin>>plan;cout<<endl;   
                  cout<<"PAYMENT METHOD : ";cin>>pay;cout<<endl;   
                 

                   switch (plan)
                  {
                  case 1:
                      cout<<"(299/- RECHARGE DONE)"<<endl;
                    break;
                  case 2:
                      cout<<"(699/- RECHARGE DONE)"<<endl;
                    break;
                  case 3:
                      cout<<"(1199/- RECHARGE DONE)"<<endl;
                    break;
                  
                  default:
                      cout<<"Error pls type again !"<<endl;             
                    break;
                  }
                  
                  switch (pay)
                  {
                  case 1:
                      cout<<"(PAYMENT THROUGH UPI IS DONE)"<<endl<<endl;
                    break;
                  case 2:
                      cout<<"(PAYMENT THROUGH GIFT CARD IS DONE)"<<endl<<endl;
                    break;
                  case 3:
                      cout<<"(PAYMENT THROUGH CREDIT CARD IS DONE)"<<endl<<endl;
                    break;
                  
                  default:
                      cout<<"Error pls type again !"<<endl<<endl;             
                    break;
                  }                                
            break;         
            case 3:       
              cout<<"299/-(1.5gb per day), 699/-(2gb per day), 1199/-(3gb per day + hotstar subscription free)  "<<endl;              
            break;       
            case 4:           
              cout<<"Calling.........................."<<endl;              
            break;     
            default:
              cout<<"Error pls type again !";
            break;
         }
       break;
       
        // english
       case 3:
         cout<<"For more information press 1"<<endl;
         cout<<"Check balance press 2"<<endl;
         cout<<"TO Check offer press 3" <<endl;
         cout<<"To talk with our customer care officer press 4"<<endl;
    cout<<"---------------------------------------------"<<endl;         
          cout<<"PRESS : ";cin>>eng;cout<<endl; 

         switch(eng){
            case 1:
              cout<<"Your recharge id is (459#1)"<<endl;
               cout<<"Press 1 to change recharge id"<<endl<<endl;
              cout<<"PRESS : ";cin>>subeng;cout<<endl; 
                
              switch(subeng){
                case 1:
                  cout<<"type your id here : ";  
                  cin>>id;  
                break;

                default:
                  cout<<"Error pls type again !";               
                break;
              }                                            
            break;         
            case 2:     
              cout<<"0 balance"<<endl;
               cout<<"(Choose your recharge)"<<endl<<endl;
               cout<<"1. 299/-(1.5gb per day)"<<endl;
               cout<<"2. 699/-(2gb per day)"<<endl;
               cout<<"3. 1199/-(3gb per day + hotstar subscription free)"<<endl<<endl;

               cout<<"1. UPI"<<endl;            
               cout<<"2. GIFT CARD"<<endl;            
               cout<<"3. CREDIT CARD"<<endl<<endl; 

                  cout<<"PLAN NUMBER : ";cin>>plan;cout<<endl;   
                  cout<<"PAYMENT METHOD : ";cin>>pay;cout<<endl;   
                 

                   switch (plan)
                  {
                  case 1:
                      cout<<"(299/- RECHARGE DONE)"<<endl;
                    break;
                  case 2:
                      cout<<"(699/- RECHARGE DONE)"<<endl;
                    break;
                  case 3:
                      cout<<"(1199/- RECHARGE DONE)"<<endl;
                    break;
                  
                  default:
                      cout<<"Error pls type again !"<<endl;             
                    break;
                  }
                  
                  switch (pay)
                  {
                  case 1:
                      cout<<"(PAYMENT THROUGH UPI IS DONE)"<<endl<<endl;
                    break;
                  case 2:
                      cout<<"(PAYMENT THROUGH GIFT CARD IS DONE)"<<endl<<endl;
                    break;
                  case 3:
                      cout<<"(PAYMENT THROUGH CREDIT CARD IS DONE)"<<endl<<endl;
                    break;
                  
                  default:
                      cout<<"Error pls type again !"<<endl<<endl;             
                    break;
                  }                                  
            break;         
            case 3:            
              cout<<"299/-(1.5gb per day), 699/-(2gb per day), 1199/-(3gb per day + hotstar subscription free)  "<<endl;              
            break;  
             case 4:           
              cout<<"Calling.........................."<<endl;              
            break;            
            default:
              cout<<"Error pls type again !";
            break;
         }
       break;

       default:
        cout<<"Error pls type again !";
       break; 
    }
}
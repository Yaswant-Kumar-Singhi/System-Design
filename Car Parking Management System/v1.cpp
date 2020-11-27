#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;
/*
 abstract class parkingSystem{
    

};

*/


int main(){
    
    cout<<"\t\t======= CAR PARKING SYSTEM ======="<<endl;
    cout<<"\t1. Enter 1 for Parking"<<endl;
    cout<<"\t1. Enter 2 for Exit"<<endl;

    int userInput;
    int userChoice;
    int count = 10;
    cin>>userInput;
    
    switch(userInput){
        case 1: 
            if(userInput == 1 )
            cout<< "Checking for avalibility"<<endl;
            usleep(1500000);
            if(count>0){
                cout<<"Parking Space Available.."<<endl;
                usleep(1000000);
                cout<<"Select your desired Time slot.."<<endl;
                usleep(1000000);
                cout<<"\t 1. Enter 1 for Slot for 0 - 2 hrs"<<endl;
                cout<<"\t 2. Enter 2 for Slot for 2 - 4 hrs"<<endl;
                cout<<"\t 3. Enter 3 for Slot for 4+ hrs"<<endl;
                cin>>userChoice;
                int fare = 0;
                switch(userChoice){
                    case 1:
                        fare = 100;
                        count--;
                        cout<<"Total fare for your selected slot of 0-2 hrs is Rs "<<fare<<endl;
                        cout<<"Collecting payment"<<endl;
                        usleep(3000000);
                        cout<<"Parking Ticket generated"<<endl;
                        usleep(1000000);
                        cout<<"Toll gates are opening.."<<endl;
                        cout<<count;
                        break;
                    
                    
                    case 2:
                        fare = 200;
                        count--;
                        cout<<fare<<count;
                        break;
                    
                    
                    case 3:
                        fare = 300;
                        count--;
                        cout<<fare<<count;
                        break;
                    
                
                    default : break;
                        
                }
                
                
            }
            else
                cout<<"No Parking Space Available";
            break;
            
        case 2 :
            if(userInput == 2)
            cout<<"Checking.."<<endl;
            usleep(3000000);
            cout<<"Toll gates are opening"<<endl;
            usleep(2000000);
            cout<<"Thank you for visiting"<<endl;
            break;
            
        default :
            break;
        }
        
    }
    

    
    
    
    

/*
PS -> customer , parkingTicket, Admin | abstract class
parkingTicket -> id,fareCategory 
customer -> Total Fare 
Admin -> collection of ticket fare, monitoring Total collection in a time period

*/

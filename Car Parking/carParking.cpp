#include<iostream>
using namespace std;
int main(){
        int enter;
        int car=0;
        int bike=0;
        int rikshw=0;
    cout<<"\t\tC A R  P A R K I N G"<<endl;
    while (true)
    {
        cout<<"Press 1 to enter car" <<endl;
        cout<<"press 2 to enter a bike"<<endl;
        cout<<"Press 3to enter rikshw"<<endl;
        cout<<"Press 4 to show the record"<<endl;
        cout<<"Press 5 to delete the record"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cin>>enter;

        if(enter==1){
            car++;
            // clear screen command
            system("CLS");
            cout<<"Car is Added "<<endl;
        }
        else if(enter==2){
            bike++;
            // clear screen command
            system("CLS");
            cout<<"Bike is Added"<<endl;
        }
        else if(enter==3){
            rikshw++;
            // clear screen command
            system("CLS");
            cout<<"Rikshw is Added"<<endl;
        }
        else if(enter==4){
            cout<<"Car "<<car<<endl;
            cout<<"Bike "<<bike<<endl;
            cout<<"Rikshw "<<rikshw<<endl;
        }
        else if (enter==5)
        {
            //delete the all data
            car=0;
            bike=0;
            rikshw=0;
            // clear screen command
            system("CLS");
            cout<<"All the record is deleted"<<endl;
        }
        else if(enter==0){
            exit(0);
        }
        else{
            cout<<"\nEnter the valid input"<<endl;
        }
        
    }
    
    return 0;
}
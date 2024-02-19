/*
Write Your class name DigitalC to implement a Digital clock in C++.
Have you Data Memeber and Member Functions to Provide the functionality of 
digital 12 hours clock.User input Hours Minute and Seconds .Digital Clock displaying its
time in from HH: MM: SS AM/PM   0-11 am    12-24 pm
*/

#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;
class DigitalC{
    private:
    int hours,minutes,seconds;
    public:
    DigitalC(int hours,int minutes,int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }
    void displayTime(){
        // if(this->hours<10 || this->minutes<10 || this->seconds<10){
        //     cout<<setfill('0')<<setw(2)<<this->hours<<":"<<setw(2)<<this->minutes<<":"<<setw(2)<<this->seconds<<" ";
        // }
        // else{
        //     cout<<this->hours<<":"<<this->minutes<<":"<<this->seconds<<" ";
        // }

        cout<<setfill('0')<<setw(2)<<this->hours<<":"<<setw(2)<<this->minutes<<":"<<setw(2)<<this->seconds<<" ";

        if(this->hours>=12){
            cout<<"PM";
        }
        else{
            cout<<"AM";
        }
    }
};

int main(){
    int hours,minutes,seconds;
    cout<<"Enter Hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>minutes;
    cout<<"Enter Seconds: ";
    cin>>seconds;

    DigitalC clock(hours,minutes,seconds);
    clock.displayTime();
    return 0;
}
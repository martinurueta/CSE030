#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>
#include <stdlib.h>
#include <iomanip>
#include "Time.h"

using namespace std;

bool getTimeFromUser(Time *time){
       string x;
       getline(cin, x);
       time->setHours (atoi(x.substr(0,2).c_str()));
       time->setMinutes (atoi(x.substr(3,2).c_str()));
       time->setSeconds (atoi(x.substr(6,2).c_str()));
       if(0 <= time->getHours() && time->getHours() < 24 && 0 <= time->getMinutes() && time->getMinutes() < 60 && 0<= time->getSeconds() && time->getSeconds() < 60){
           if(x.length() == 8){
               return true;
           }
       }
       return false;
}

void print24Hour(Time time1, Time time2){
cout << "The lecture starts at " << setfill('0') << setw(2) << time1.getHours() << ":" << setfill('0') << setw(2) << time1.getMinutes() << ":" << setfill('0') << setw(2) << time1.getSeconds() << " and ends at " << setfill('0') << setw(2) << time2.getHours() << ":" << setfill('0') << setw(2) << time2.getMinutes() << ":" << setfill('0') << setw(2) << time2.getSeconds(); 
}


int main(){
    bool ends;
    bool starts;
    Time start;
    Time end;
    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
    starts = getTimeFromUser(&start);
    if (starts == false){
        cout << "The start time entered is invalid!";
        return 0;
    }
    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    ends = getTimeFromUser(&end);
    if (ends == false){
        cout << "The start time entered is invalid!";
        return 0;
    }
    print24Hour(start, end);

    return 0;
}
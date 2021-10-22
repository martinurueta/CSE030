#include <iostream>
#include <string>
#include <fstream>
#include <assert.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct Time
{
   int hour;
   int minutes;
   int seconds; 
};

bool getTimeFromUser(struct Time &time){
       string x;
       getline(cin, x);
       time.hour = atoi(x.substr(0,2).c_str());
       time.minutes = atoi(x.substr(3,2).c_str());
       time.seconds = atoi(x.substr(6,2).c_str());
       if(0 <= time.hour && time.hour < 24 && 0 <= time.minutes && time.minutes < 60 && 0<= time.seconds && time.seconds < 60){
           if(x.length() == 8){
               return true;
           }
       }
       return false;
}

void print24Hour(struct Time time1, struct Time time2){
cout << "The lecture starts at " << setfill('0') << setw(2) << time1.hour << ":" << setfill('0') << setw(2) << time1.minutes << ":" << setfill('0') << setw(2) << time1.seconds << " and ends at " << setfill('0') << setw(2) << time2.hour << ":" << setfill('0') << setw(2) << time2.minutes << ":" << setfill('0') << setw(2) << time2.seconds; 
}


int main(){
    bool ends;
    bool starts;
    Time start;
    Time end;
    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
    starts = getTimeFromUser(start);
    if (starts == false){
        cout << "The start time entered is invalid!";
        return 0;
    }
    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    ends = getTimeFromUser(end);
    if (ends == false){
        cout << "The start time entered is invalid!";
        return 0;
    }
    print24Hour(start, end);

    return 0;
}
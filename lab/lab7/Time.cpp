#include <iostream>
#include<stdlib.h>
#include "Time.h"
Time::Time(){
    hours = 0;
    minutes = 0; 
    seconds =0;
}
Time::Time(int hours, int minutes, int seconds){
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}
void Time::setHours(int hours){
    this->hours = hours;
}
void Time::setMinutes(int minutes){
    this->minutes = minutes;
}
void Time::setSeconds(int seconds){
    this->seconds = seconds;
}
int Time::getHours() {
	return hours;
}
int Time::getMinutes() {
	return minutes;
}
int Time::getSeconds() {
	return seconds;
}
Time::~Time(){
    
}
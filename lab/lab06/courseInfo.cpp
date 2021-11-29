#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
using namespace std;

struct Time
{
	int hour;
	int minutes;
	int seconds;
};

struct Course
{
	string name; 
	string days;
	int credits;
	double avgGrade;
	Time startTime;
	Time endTime;
	bool majorRequirement;
};

int main()
{

	ifstream file;

	file.open("in.txt");
	
	string data;
	string etime;
	string stime;
	int count;
	int multi = 0;
	getline(file, data);
	count = atoi(data.c_str());
	Course Courses[count];
	
	for (int i = 1; i <= (count * 7); i++)
	{
		if ((i -(multi * 7)) == 1)
		{
			getline(file, data); 
			Courses[multi].name = data;
		}
		else if ((i -(multi * 7)) == 2)
		{
			string temp;
			getline(file, data);
			temp = data;
			Courses[multi].credits = atoi(temp.c_str());
		}
		else if ((i -(multi * 7)) == 3)
		{
			int temp;
			bool tempB;
			getline(file, data);
			temp = atoi(data.c_str());
			if (temp == 0)
			{
				tempB = false;
			}
			else if (temp == 1)
			{
				tempB = true;
			}
			Courses[multi].majorRequirement = tempB;
		}
		else if ((i -(multi * 7)) == 4)
		{
			string temp;
			getline(file, data);
			temp = data;
			Courses[multi].avgGrade = atof(temp.c_str());
		}
		else if ((i -(multi * 7)) == 5)
		{
			getline(file, data);
			Courses[multi].days = data;
		}
		else if ((i -(multi * 7)) == 6)
		{
			string temp;
			getline(file, data);
			temp = data;
			Courses[multi].startTime.hour = atoi(temp.substr(0,2).c_str());
			Courses[multi].startTime.minutes = atoi(temp.substr(3,2).c_str());
			Courses[multi].startTime.seconds = atoi(temp.substr(6,8).c_str());
		}
		else if ((i -(multi * 7)) == 7)
		{
			string temp;
			getline(file, data);
			temp = data;
			Courses[multi].endTime.hour = atoi(temp.substr(0,2).c_str());
			Courses[multi].endTime.minutes = atoi(temp.substr(3,2).c_str());
			Courses[multi].endTime.seconds = atoi(temp.substr(6,8).c_str());
			multi++;
		}
	}
	file.close();
	cout << "----------------" << endl << "SCHEDULE OF STUDENT" << endl << "----------------" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "COURSE " << (i+1) << ": " << Courses[i].name << endl;
		if (Courses[i].majorRequirement)
		{
			cout << "Note: this course is a major requirement!" << endl;
		}
		else
		{
			cout << "Note: this course is not a major requirement..." << endl;
		}
		cout << "Number of Credits: " << Courses[i].credits << endl;
		cout << "Days of Lectures: " << Courses[i].days << endl;
		if(Courses[i].startTime.hour > 12){
                Courses[i].startTime.hour = Courses[i].startTime.hour - 12;
                stime = "pm";
            }else{
                stime = "am";
            }
		if(Courses[i].endTime.hour > 12){
                Courses[i].endTime.hour = Courses[i].endTime.hour - 12;
                etime = "pm";
            }else{
                etime = "am";
            }
		cout << "Lecture Time: " << setw(2) << setfill('0') << Courses[i].startTime.hour << ":" << setw(2) << setfill('0') << Courses[i].startTime.minutes << ":"  << setw(2) << setfill('0') << Courses[i].startTime.seconds<< stime;
		cout << " - " << setw(2) << setfill('0') << Courses[i].endTime.hour << ":" << setw(2) << setfill('0') << Courses[i].endTime.minutes << ":"  << setw(2) << setfill('0') << Courses[i].endTime.seconds << etime <<endl;
		cout << "Stats: on average students get " << Courses[i].avgGrade << "% in this course." << endl;
		cout << "----------------" << endl;
	}

	return 0;
}
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
using namespace std;

int main ()
{
	time_t timer1;
	time_t timer;

	cout << "Enter time in seconds" << endl;
	int alarm_t = -1;
	while (alarm_t < 0)
		cin >> alarm_t;

	time(&timer);  /* get current time; same as: timer = time(NULL)  */
	time(&timer1);
	
	cout << "Enter CTRL + C to end alarm" << endl;
	while (timer != timer1 + alarm_t - 1)
	{
		time(&timer);
		cout << timer1 + alarm_t - timer << endl;
		sleep(1);
	}
	cout << "ALARM!!!!!!" << endl;
	for (;;)
	{
		cout << "BEEP" << endl;
		sleep(1);	
	}  
	return 0;
}	

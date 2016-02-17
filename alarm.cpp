#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>
using namespace std;

int main ()
{
	time_t timer1;
	time_t timer;

	time(&timer);  /* get current time; same as: timer = time(NULL)  */
	time(&timer1);
	cout << "set time" << endl;
	int alarm_t;
	cin >> alarm_t;

	while (timer != timer1 + alarm_t)
	{
		time(&timer);
		cout << timer1 + alarm_t - timer<< endl;
		sleep(1);
	}
	cout << "ALARM!!!!!!" << endl;
	for (;;)
	{
		cout << "BEEP" << endl;
		char d = (char)(7);
		printf("%c\n",d);
		cout << '\a';
	//	beep();
	}  
	return 0;
}	

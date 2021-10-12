#include<iostream>
#include<stdio.h>
using namespace std;
 
struct time{
	int time;
	int hour;
	int min;
	int sec ;
	
};

int display(time);
time t;
int  main()
{
cout << "Enter a time in seconds: ";
	cin >> t.time;
	

	display(t);
return 0;
}

int display(time){
	
	t.hour = t.time/3600;
	t.time = t.time%3600;
	t.min = t.time/60;
	t.time = t.time%60;
	t.sec = t.time;
	
	
	cout<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
}

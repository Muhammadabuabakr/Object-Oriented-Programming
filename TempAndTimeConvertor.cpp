#include <iostream>
using namespace std;


int convert_into_hours(int sec)
{
	cout << "hours = "<< sec/3600<<endl;
}
int convert_into_sec(int hours)
{
	cout << "second = "<< hours*3600<<endl;
}

double fahrenheitToCelsius(double fahrenheit)
 {
     double celsius;
 
     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
     cout << "temperature = "<< celsius<<endl;
 }
int main()
{
	float sec , hours , temp;
	cout << "enter the sec:";
	cin >> sec;
	convert_into_hours(sec);
	cout << "enter the hours:";
	cin >> hours;
	convert_into_sec(hours);
	cout << "enter the temp:";
	cin >> temp;
	fahrenheitToCelsius(temp);
	
 	return 0;
 	
}


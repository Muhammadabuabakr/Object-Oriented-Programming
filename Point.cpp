#include <iostream>
using namespace std;
int main (){
	int intvar;
	cout << "enter the numbers = ";
	cin >> intvar;
	float fvar;
	cout << "enter the float nmbs = ";
	cin >> fvar;
	char charvar;
	cout << "enter any characters = ";
	cin >> charvar;
	string strvar;
	cout << "enter any string = ";
	cin >> strvar;
	int *intptr = &intvar;
	float *fptr = &fvar;
	char *chrptr = &charvar;
	string *strptr = &strvar;
	cout << "size of integer  = " << sizeof(*intptr)<<endl;
	cout << "size of float  = " << sizeof(*fptr)<<endl;
	cout << "size of character = " << sizeof(*chrptr)<<endl;
	cout << "size of string = " << sizeof(*strptr)<<endl;
	//system("pause");
	
	
}

#include <iostream>
using namespace std;
void fib(){
	int x;
	int z;
	int a = 0;
	int b = 1;
	cout << "enter the from untill you wnat fib series:";
	cin >> x;
	cout<<a<<" ";
	z = a + b;
	while(z <= x){
		cout << z<<" ";
		z = a+b;
		a = b;
		b = z;
	}
}
int main(){
	fib();
}

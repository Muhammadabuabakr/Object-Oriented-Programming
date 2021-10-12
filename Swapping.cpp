#include <iostream>
using namespace std;
void pointer(int *ptr1 ,int  *ptr2){
	
	
	cout << "ptr1 = " << *ptr1 <<endl;
	cout << "ptr2 = " << *ptr2 <<endl;
}
int main(){
	int a = 10;
	int b = 2;
	cout << "The value before swapping "<<endl;
	cout <<"ptr1 ="<< a <<endl;
	cout<< "ptr2 = "<< b <<endl;
	
	cout << "The value after swapping"<<endl;
	a = a + b;
	b = a - b;
	a = a - b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	pointer (ptr1 , ptr2 );
	
	
}

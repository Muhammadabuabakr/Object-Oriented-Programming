#include <iostream>
using namespace std;
int main(){
	int var = 9;
	int *ptr = &var ;
	cout << "old value of variable = " << *ptr <<endl;
	cout << "Enter the updated value of variable = ";
	cin >> *ptr;
	cout << "updated value of variable = "<< *ptr<<endl; 
	cout << "address of pointer = " << &ptr <<endl;
	*ptr = NULL;
	cout << "The address after deallocating the pointer = "<< *(&ptr) <<endl;
	// it will show the address but it is different from the  pervious address.
	
	
}

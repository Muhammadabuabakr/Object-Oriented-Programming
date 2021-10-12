/*                                            QUESTION # 04
                                                  MINI CALCULATOR                  
*/
#include <iostream>
#include <cmath>
using namespace std;

void Add_num(int a , int b){
	cout << "a + b =" << "=" << a+b << endl;
}
void sub_num(int a , int b){
	cout << "a - b =" << "=" << a-b << endl;
}
void amin_num(int a , int b){
	cout << "a x b =" << "=" << a*b << endl;
}
void mod_num(int a , int b){
	cout << "a % b =" << "=" << a%b << endl;
}
void power_num(int a , int b){
	cout << "a ^ b =" << "=" << pow(a,b) << endl;
}
void menu(){
	int selector;
	cout << "				welcome to mini calculator				"<<endl;
	cout << "press the specific button:"<<endl;
	cout << "1. ADDITION"<<endl;
	cout << "2.SUBTRACTION"<<endl;
	cout << "3.MULTIPLICATION"<<endl;
	cout << "4.MODULA'S"<<endl;
	cout << "5.POWER"<<endl;
	cout << "6.RESTART THE CALCULATOR"<<endl;
	cin >> selector;
	if (selector == 1){
		Add_num(int a ,int b);
		
	}
	if (selector == 2){
		sub_num(int a , int b);
		
	}
	if (selector == 3){
		amin_num(int a , int b);
	}
	if (selector == 4){
		mod_num(int a , int b);
	}
	if (selector == 5){
		power_num(int a , int b);
	}
	if (selector == 6){
		menu();
	}
	system("cls");
}
	
int main()
{
	int a;
	int b;
	cout << "enter the first number = ";
	cin >> a;
	cout << " enter the second number = ";
	cin >> b;
	menu();
	Add_num(int a,int b);
	sub_num(int a,int b);
	amin_num(int a,int b);
	mod_num(int a,int b);
	power_num(int a,int b);
	 
}


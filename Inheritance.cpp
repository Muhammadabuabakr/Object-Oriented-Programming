#include<iostream>
using namespace std;
class Employee{
public:
	int number;
	int time;
	int pay;
	int total_pay;
	int overtime;
	int bonus;
	string name;
	int wages;
};
class PieceWorker:public Employee{
public:
 	void data(){
	Employee E;
	cout <<"Enter the name of worker:"<<endl;
	cin >> name;
	cout << "Enter pay on per piece:"<<endl;
	cin >> E.pay;
	cout << "Enter the number of pieces:"<<endl;	
	cin >>E.number;
	E.total_pay = E.pay * E.number;
	if (E.number >  100){
		E.total_pay += 20;
		cout << "now your pay after bonus :"<< E.total_pay;
	}
	else{
		cout << "You Earn no bonus."<<endl;
		cout << "your salary:";
		cout << E.total_pay;
	}
}
};
class HourlyWorker:public Employee{
public:
	void data1(){
	Employee H;
	cout <<"Enter the name of worker:"<<endl;
	cin >> name;
	cout << "Enter the pay rate per hour"<<endl;
	cin >> H.pay;
	cout << "Enter the working hours:"<<endl;
	cin >> H.time;
	wages = H.time * H.pay;
	if (H.time > 40){
		cout << "overtime is:"<<H.time - 40;
		bonus = 1.5*H.time;
		cout << "your bonus is:"<<bonus<<endl;
		cout << "and your salary is:";
		total_pay = wages + bonus; 
		cout << total_pay;
	}
	else {
		cout << "you earn no bonus so your salary :";
		cout << wages;
	}
}
};
int main(){
	int x;
	cout << "which data you want to enter:"<<endl;
	cout << "1.Piece Worker's"<<endl;
	cout << "2.Hours Worker's"<<endl<<endl;
	cout << "Enter your choice:";
	cin >> x;
	Employee *E;
	
	if (x==1){
		E = new PieceWorker;
	PieceWorker p;
	E = &p;
	p.data();
}
	else{
		HourlyWorker H;
		E = &H;
		H.data1();
		
	}
}

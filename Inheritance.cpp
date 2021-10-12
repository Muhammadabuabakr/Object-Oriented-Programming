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

//Question#2

#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
class polygon{
public:
	float len;
	float wid;
	
	polygon(){
		cout << "Enter the value of length:";
		cin >> len;
		cout << "Enter the value of width:";
		cin >> wid;
	}
	virtual float Area()=0;
	virtual float Perimeter()=0;
	virtual float Display()=0;	
};
class square:public polygon
{
public:
	float Area(){
		cout <<endl;
		cout <<"Area of square:"<<4*len<<endl;	
	}
	float Perimeter(){
		
		cout <<"Perimeter of square:"<<4*len<<endl;
		cout <<endl;
	}
	float Display(){
		Area();
		Perimeter();
	}
};
class Rectangle:public polygon
{
	float Area(){
		cout << endl;
		cout <<"Area of Rectangle:"<<2*len*wid<<endl;
	}
	float Perimeter(){
		cout <<"Perimeter of Rectangle:"<<2*(len+wid)<<endl;
		cout << endl;
	}
	float Display(){
		Area();
		Perimeter();
	}
};
class Triangle:public polygon
{
	float Area(){
		cout << endl;
		cout <<"Area of Triangle:"<<(len*wid)/2<<endl;
	}
	float Perimeter(){
		float height;
		height = sqrt(pow(len,2) + pow(wid,2));
		cout <<"Perimeter of Triangle:"<<len+wid+height<<endl;
		cout <<endl;
	}
	float Display(){
		Area();
		Perimeter();
	}
};
int main(){
	polygon *c;
	square s;
	c=&s;
	c->Display();
	Rectangle r;
	c = &r;
	c->Display();
	Triangle t;
	c = &t;
	c->Display();
}
//Question#3

#include<iostream>
#include<string>

using namespace std;

class sitara
{
private:
	string name;
	string Rank;
	int BasicPay;
	int MD;
	int HR;
	int GrossPay;
	int ann;
	friend void read_record(sitara );
	friend int  display(sitara );
	friend void Gross_pay(sitara );
	friend void Annual_Increment(sitara );
	public:
		
	sitara(){
		name = " ";
		Rank = "";
		BasicPay = 0;
		HR = 0;
	}
};

void read_record(sitara obj)
{
	cout<<"Enter name of empolyee: "<<endl;
	cin>>obj.name;
	cout<<"Enter the Rank of employee :"<<endl;
	cin>>obj.Rank;
	cout<<"Basic pay of employee: "<<endl;
	cin>>obj.BasicPay;
	cout<<"medical allowance: "<<endl;
	cin>>obj.MD;
	cout<<"House Rent: "<< endl;
	cin>>obj.HR;
	display(obj);
}


int display(sitara obj){
	
cout<<"your output:"<< endl;
	cout<<obj.name<<endl;
	
	cout<<obj.Rank<<endl;
	
	cout<<obj.BasicPay<<endl;
	
	cout<<obj.MD<<endl;
	
	cout<<obj.HR<<endl;

Gross_pay(obj);
}
void Gross_pay (sitara obj)
{
	obj.GrossPay =  obj.BasicPay+ obj.MD;
	cout<<"Gross pay "<<obj.GrossPay<< endl;
	Annual_Increment(obj); 
}

void Annual_Increment (sitara obj)
{
	obj.ann=  0.2 * obj.GrossPay;
	//  ob.ann = ob.ann +ob.GrossPay; 
	cout<<"increment in salary after 1 year:   "<<obj.ann<<endl;
}

int main(){
	
	sitara obj;

	read_record(obj);
	display(obj);
	Gross_pay(obj);
	Annual_Increment(obj);
return 0;
}

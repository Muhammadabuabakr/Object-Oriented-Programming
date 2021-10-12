/*                              QUESTION # 01
								SMALL SUPER MARKET MANAGMENT SYSTEM
*/
#include <iostream>
using namespace std;
string type;
int gro_type;
int cost_price;
int toys_type;
int sum = 0;
int quantity;
void toys_items();
void grocery_item();
void cosmetics_items();
void menu();
void profit_loss();

void menu(){

	cout << "select the type of shopping:"<<endl;
	cout << "GROCERY" << endl;
	cout << "TOYS" << endl;
	cout << "COSMETICS" << endl;
	cout << "SUM" << endl<<endl;
	cout << "enter the name of product:"<<endl;
	cin >> type;
	system("cls");
	if (type == "GROCERY"||type == "grocery"){
		grocery_item();
	}
	if (type == "TOYS"||type == "toys"){
		toys_items();
	} 
	if (type == "COSMETICS"||type == "cosmetics"){
		cosmetics_items();
	}
	if (type == "SUM"||type == "sum"){
		profit_loss();
	}
	
}
void grocery_item(){
	cout << "list and price of grocery:"<<endl;
	cout << "1.BREAD == 100Rs"<<endl;
	cout << "2.NESTLE YOUGURT == 120Rs"<<endl;
	cout << "3.JAM JAR == 200Rs"<<endl;
	cout << "4.SAUCE == 100Rs"<<endl;
	cout << "enter the name which you want to buy"<<endl;
	cin >> gro_type;
	cout <<endl;
	system("cls");
	
	if (gro_type == 1){
		int n;
		cout << "enter the quantity of bread which is sale today:";
		cin >> quantity;
		n = quantity * 100;
		cout << "TODAY BREAD SALE = " << n << endl;
		sum += n;
		menu();
	}
	if (gro_type == 2){
		int n;
		cout << "enter the quantity of yougurt which is sale today";
		cin >> quantity;
		n = quantity * 120;
		cout << " TODAY YOUGURT SALE = " << n << endl;
		sum += n;
		menu();
	}
	if (gro_type == 3){
		int n;
		cout << "enter the quantity of jam jar which is sale today";
		cin >> quantity;
		n = quantity * 200;
		cout << " TODAY JAM JAR SALE = " << n << endl;
		sum += n;
		menu();
	}
	
		
}
void toys_items(){
	cout << "list and price of toys:"<<endl;
	cout << "1.REMOTE CONTROLL CAR == 1000Rs"<<endl;
	cout << "2.BABY DOLLS BUNDLE == 1200Rs"<<endl;
	cout << "3.BABY STUDY TABLE == 2000Rs"<<endl;
	cout << "4.BUNDLE OF TOYS == 1000Rs"<<endl;
	cout << "enter the name which you want to buy"<<endl;
	cin >> toys_type;
	system("cls");
	if (toys_type == 1){
		int n;
		cout << "enter the quantity of remote controll car which is sale today";
		cin >> quantity;
		n = quantity * 1000;
		cout << " TODAY remote controll car SALE = " << n << endl;
		sum += n;
		menu();
		}
	if (toys_type == 2){
		int n;
		cout << "enter the quantity of baby doll bundle which is sale today";
		cin >> quantity;
		n = quantity * 1200;
		cout << "TODAY BABY DOLL BUNDLE SALE = " << n << endl;
		sum += n;
		menu();
	}
	if (toys_type == 3){
		int n;
		cout << "enter the quantity of baby study table which is sale today";
		cin >> quantity;
		n = quantity * 2000;
		cout << " TODAY baby study table SALE = " << n << endl;
		sum += n;
		menu();
	}
	if (toys_type == 4){
		int n;
		cout << "enter the quantity of bundle of toys which is sale today";
		cin >> quantity;
		n = quantity * 1000;
		cout << " TODAY BUNDLE OF TOYS  SALE = " << n << endl;
		sum += n;
		menu();
	}
}
void cosmetics_items(){
	cout << "sorry! stock is not available yet.I hope it may come soon"<<endl;
	menu();
}
void profit_loss(){
	cout << "sum =" << sum << endl;
	menu();
	
}


int main(){
		cout << "				WELCOME TO SMALL SUPER DOPER MARKET				"<<endl;
	menu();
	
}


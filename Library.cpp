#include <iostream>
using namespace std;

struct library{
	string book_name;
	string bookie;
	string book_status;
	int len;
	int selection;
	
};
library p;
library size(library);
int main(){
	size(p);
	library sel;
	library name[p.len];
	library id[p.len];
	library status[p.len];
	cout << "enter books name:"<<endl;
	for (int i =0;i<p.len;i++){
		cin >> name[i].book_name;
	}
	for (int i =0;i<p.len;i++){
		cout << "enter book id of"<< name[i].book_name <<" : ";
		cin >> id[i].bookie;
	}
	for (int i =0;i<p.len;i++){
		cout << "enter status of"<< name[i].book_name <<" : ";
		cin >> status[i].book_status;
	}
	system("cls");
	cout <<"press key\n1.increase size\n2.show record\n3.exit\n";
	cin >> sel.selection;
	if (sel.selection == 1){
		size(p);
	}
	else if (sel.selection == 2){
		cout << "your books record:"<<endl;
		for (int i =0;i<p.len;i++){
			cout <<" "<<name[i].book_name <<" "<<id[i].bookie<<" "<<status[i].book_status<<" "<<endl;
			
		
	}
	
}
}
library size(library){
	cout << "enter the data size:";
	cin >> p.len;
	return p;
}


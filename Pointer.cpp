#include<iostream>
#include<string>
using namespace std;
template <class T1, class T2, class T3,class T4>
class data {
	T1 name;
	T2 roll_nmb;
	T4 course_list;
	T3 Section;
public:

	void setter(T1 a, T2 b, T3 c,T4 d) {
		this->name = a;
		this->roll_nmb = b;
		this->Section = c;
		this->course_list = d;

	}
	T1 getterN() {
		return name;
	}
	T2 getterR() {
		return roll_nmb;
	}
	T3 getterS() {
		return Section;
	}
	T4 getcourse_list(){
		return course_list;
	}
};
int main() {
	string name,course;
	int a;
	char s;
	data<string, int, char,string> obj;
	cout << "Enter your name:"<<endl;
	cin>>name;
	cout << "Enter your rollnumber:"<<endl;
	cin>>a;
	cout << "Enter your section:"<<endl;
	cin >> s;
	cout << "Enter your courses:"<<endl;
	cin.ignore();
	getline(cin,course); 
	obj.setter(name,a,s,course);
	cout << endl;
	cout << "Your Data:"<<endl;
	cout << "Rollnumber:"<<obj.getterR()<<endl;
	cout << "Name:"<<obj.getterN()<<endl;
	cout << "Section:"<<obj.getterS()<<endl;
	cout<< "courses:"<<obj.getcourse_list()<<endl;
}

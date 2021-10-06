#include<iostream>
using namespace std;
class shape{
	public:
	double len;
	double wid;
	void get_data(){
		cout<< "Enter the length:"<<endl;
		cin >> len;
		cout << "Enter the width:"<<endl;
		cin >> wid;
		
	}
	void virtual display_area()=0;
	
};
class rectangle:public shape{
	public:
		void display_area(){
			cout <<"Area of Rectangle =";
			cout << len*wid<<endl;
		}
};
class triangle:public shape{
	public:
		void display_area(){
			cout << "Area of Triangle =";
			cout << (len*wid)*0.5;
		}
};
int main(){
	shape *obj;
	rectangle rect;
	triangle tri;
	obj = &rect;
	obj -> get_data();
	obj ->display_area();
	obj = &tri;
	obj -> get_data();
	obj -> display_area();
}

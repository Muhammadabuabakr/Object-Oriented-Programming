#include <iostream>
using namespace std;
struct complex{
	double real;
	double imaginary;
int add(complex obj[],int size){
	int  realR = 0,imajR = 0;
		for (int i =0;i<size;i++){
			realR += obj[i].real;
			imajR += obj[i].imaginary;
			
		}
		if (imajR != 0 ){
			cout << "The answer is:"<<endl;
			cout << realR << "+" << imajR << "i"<<endl;
		}
		else
			cout<< "Answer is not complex number..!";  
		
		
	}

};

int main(){
	int size;
	complex obj1;
//	
	cout << "how much number you want to add:";
	cin >> size;
	complex *obj =new complex[size];
	for (int i = 0;i < size; i++){
		cout << "complex number:";
		cin>>obj[i].real>>obj[i].imaginary;
	}
	obj1.add(obj,size);
	
	
	
}

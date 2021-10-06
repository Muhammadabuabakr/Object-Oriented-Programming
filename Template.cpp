#include<iostream>
using namespace std;

template<class T>

class calculator {
	T num1;
	T num2;

public:
	calculator(T n, T n1) {


		num1 = n;
		num2 = n1;

	}
	T add(T n,T n1) {

		return n + n1;
	}
	T sub(T n,T n1) {
		return n - n1;
	}
	T mul(T n,T n1) {
		return n * n1;

	}
	T div(T n,T n1) {
		return n / n1;

	}
	void cal() {
		cout << "Addition : " << add(n,n1) << endl;
		cout << "Subtraction: " << sub(n,n1) << endl;
		cout << "multiply: " << mul(n,n1) << endl;
		cout << "Division: " << div(n,n1) << endl;
	}
};

int main() {
	int x, y;
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second:";
	cin >> y;
	calculator<int> ob;
	ob.calculator(x,y);
	ob.cal();
	system("pause");

	return 0;
}

#include<iostream>
using namespace std;
class rational
{
	int a, b;
	int c, d;
	void multiplication(int a, int b, int c, int d)
	{
		int answer1 = a*c;
		int answer2 = b*d;
	}
	void multiplication(float a, float b, float c, float d)
	{
		int answer1 = a*c;
		int answer2 = b*d;
	}
	void addition(int a, int b, int c, int d)
	{
		int answer1 = a+c;
		int answer2 = b+d;
	}
	void addition(float a, float b, float c, float d)
	{
		int answer1 = a + c;
		int answer2 = b + d;
	}
public:
	void setA(int p)
	{
		a = p;
	}
	void setB(int p)
	{
		b = p;
	}
	void setC(int p)
	{
		c = p;
	}
	void setD(int p)
	{
		d = p;
	}
	void setA(float p)
	{
		a = p;
	}
	void setB(float p)
	{
		b = p;
	}
	void setC(float p)
	{
		c = p;
	}
	void setD(float p)
	{
		d = p;
	}
	rational()
	{
		a = 0;
		b = 0; 
		c = 0; 
		d = 0;
	}
	void subtraction(int a, int b, int c, int d)
	{
		int answer1 = a - c;
		int answer2 = b - d;
	}
	void subtraction(float a, float b, float c, float d)
	{
		int answer1 = a - c;
		int answer2 = b - d;
	}
	void division(int a, int b, int c, int d)
	{
		int answer1 = a / d;
		int answer2 = b / c;
	}
	void division(float a, float b, float c, float d)
	{
		int answer1 = a / d;
		int answer2 = b / c;
	}
};
int main()
{
	double a, b, c, d;
	rational obj;
	cout << "Enter the first rational number in the form a followed by b." << endl;
	cin >> a >> b;
	cout << "\nEnter the second rational number in the form a followed by b." << endl;
	cin >> c >> d;
	obj.setA(a);
	obj.setB(b);
	obj.setC(c);
	obj.setD(d);
}

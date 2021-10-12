#include <iostream>
using namespace std;
double sum(int n) 
{ 
  double i, s = 0.0; 
  for (i = 1; i <= n; i++) 
      s = s + 1/i; 
  return s; 
} 
int main()
{
	int c;
	cout << "enter any nummber:"
	cin>> c;
	int ss = sum(c);
	cout<<ss<<endl;
	return 0;
}

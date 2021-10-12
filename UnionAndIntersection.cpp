#include <iostream>
using namespace std;
int x;
int v;
int s;
int a = 0;
//union_fun(x,v);
int union_fun(int x,int v,int s){
	int temp;
	int *ptr = new int[x];
	int *ptr1 = new int [v];
	int *ptr2 = new int[x+v];
	cout << "your first array:"<<endl;
	for (int i =0;i<x;i++){
		cin >> ptr [i];
	}
	cout << "your second array:"<<endl;
	for (int j=0;j<v;j++){
		cin >> ptr1[j];
	}
	for(int i=0;i<x;i++)
	{   
		ptr2[i]=ptr[i];
		ptr2[i+x]=ptr1[i];
	}	
	
 	cout << "new array:"<<endl;
	for (int d=0;d<s;d++){
		cout<<ptr2[d]<<endl;
	}
//	for (int d =0;d<s;d++){
//		for(int a=0;a<s;a++){
//			if(ptr2[d]==ptr2[a]){
//				
//			}
//		}
//	}
//	
for(int i=0;i<s;++i)
        for(int j=i+1;j<s;)
        {
            if(ptr2[i]==ptr2[j])
            {
                for(int k=j;k<s-1;++k)
                    ptr2[k]=ptr2[k+1];
                    
                --s;
            }
            else
                ++j;
        }
	cout << "new array:"<<endl;
	for (int d=0;d<s;d++){
		cout<<ptr2[d]<<endl;
	}
	
}
int main(){
	cout << "enter the range of first array = ";
	cin >> x;
	cout << "enter the range of second array = ";
	cin >> v;
	s = x+v;
	union_fun(x,v,s);
}

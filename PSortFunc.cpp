#include <iostream>
using namespace std;
void sorting();
void output();
//void del();

//void del(int x){
//
//}

int * sorting(int x){
	int *ptr = new int[x];
	cout << "without sorted array:"<<endl;
	for (int i=0;i<x;i++){
		cin >> ptr[i];
	}
	for(int j=0;j<x;j++){
		for (int i=0;i<x-1;i++){
			if(ptr[i]>ptr[i+1]){
				int temp = ptr[i];
				ptr[i] = ptr[i+1];
				ptr[i+1] = temp;
			}
		}
	}

	return ptr;
}

int main(){
int x;
cout<<"Enter the range of array = ";
cin>>x;
	int * ptr;
	ptr = sorting(x);
	cout << "sorted array:"<<endl;
	for (int j=0;j<x;j++){
		cout << ptr[j]<<endl;
	}
		delete[] ptr;
		
}


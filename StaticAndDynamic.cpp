#include <iostream>
using namespace std;
int main(){
	int rows;
	int columns;
	cout << "enter the size of 2d array :";
	cin >>rows>>columns;
	int arr[rows][columns];
	cout << "enter the value of array"<<endl;
	for (int i=0;i<rows;i++){
		for (int j=0;j<columns;j++){
			cin >> arr[i][j];
		}
	}
	system ("cls");
	cout <<"the value of static array:"<<endl;
	for (int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			
			cout << arr[i][j]<<" ";
		}
	}
	int **ptr;
	ptr = new int*[rows];
	for (int i=0;i<rows;i++){
		ptr[i] = new int [columns];
	}
	for (int i =0;i<rows;i++){
		for (int j=0;j<columns;j++){
			int v = arr[i][j];
			ptr[i][j] = v;
			
		}
	}
	cout << endl;
	cout << "output of dynamic array:"<<endl;
	for (int i=0;i<rows;i++){
		for (int j=0;j<columns;j++){
			cout << ptr[i][j]<<" ";
		}
	}
	for (int i =0;i<rows;i++){
		delete [] ptr[i];
	}
	delete []ptr;
	ptr = NULL;
}

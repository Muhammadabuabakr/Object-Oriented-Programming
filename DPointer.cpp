#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int **ptr = new int*[0];
	int **ptrA = new int*[0];
	int size1;
	int size;
	cout<<"Enter Size of array: ";
  	cin>>size;
  	cout<<"Enter any "<<size<<" num in array: ";
  	for(int i=0;i<size;i++)
  	{
  	 cin>>*ptr[i];
  	
	}
	
	cout<<"Enter Size of array2 : ";
  	cin>>size1;
  	cout<<"Enter any "<<size1<<" num in array: ";
  	for(int i=0;i<size1;i++)
  	{
  	 cin>>*ptrA[i];
}
return 0;
}

//Diagnol


	#include<iostream>
#include<stdio.h>
using namespace std;
void diagonal(int **ptr);
int main(){
	int **ptr = new int*[3];
	for(int i = 0; i<3;i++){
		*(ptr+i) = new int[3];
	}
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cin>>*(*(ptr+i)+j);
		}
	}
	diagonal(ptr);
return 0;
}
void diagonal(int **ptr){
	
	for(int i = 0;i <3; i++){
		for(int j = 0; j<3;j++){
			cout<<*(*(ptr+i)+j)<<" ";
		}
	cout<<endl;
	}
	
	for(int i=0;i<3;i++)
	{
for (int j=0;j<=i;j++)
		{
		if(i==j)
	{
	cout<<"the diagonal elements are :"  <<" "<<ptr[i][j];
	}
		cout<<endl;
	}

	}
	for(int i =0; i <3; i++){
	delete []ptr;  
}
delete []ptr;	
}

//Dynamic Arrays

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
// Array Through Pointer

#include<iostream>
using namespace std;
int main(){
	int size1,size2,size3;
	int temp,temp1,temp2;
	int const rows = 3;
	int const cols = 3;
	int **ptr , **ptr1 ,**ptr2;
	ptr = new int*[rows];
	ptr1 = new int*[rows];
	ptr2 = new int*[rows];
	for (int i = 0;i<rows;i++){
		ptr[i] = new int[cols];
		ptr1[i] = new int[cols];
		ptr2[i] = new int[cols];
	}
	cout << "enter the value first array:"<<endl;
	for (int i =0 ;i<rows;i++){
		for(int j = 0;j<rows;j++){
			cin >> *(*(ptr+i)+j);
		}
	}
	cout <<"enter the value of second array:"<<endl;
	for (int i =0 ;i<rows;i++){
		for(int j = 0;j<rows;j++){
			cin >> *(*(ptr1+i)+j);
		}
	}
	for (int i =0;i<rows;i++){
		for(int j =0;j<rows;j++){
			temp = *(*(ptr+i)+j);
			temp1 = *(*(ptr1+i)+j);
			temp2 = temp1 * temp;
			*(*(ptr2+i)+j) = temp2;
		}
	}
	cout << "output of third array:"<<endl;
	for(int i = 0;i<rows;i++){
		for (int j = 0;j<rows;j++){
			cout << *(*(ptr2+i)+j)<<" ";
		}
	}
	
}

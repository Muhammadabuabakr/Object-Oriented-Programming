#include<iostream>
using namespace std;

void no_empty_spaces(int n){

    int i,j,k;
	int *ptr =new int[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;++i)
        cin>>ptr[i];
        
    for(int i=0;i<n;++i)
        for(int j=i+1;j<n;)
        {
            if(ptr[i]==ptr[j])
            {
                for(int k=j;k<n-1;++k)
                    ptr[k]=ptr[k+1];
                    
                --n;
            }
            else
                ++j;
        }
    
    cout<<"\n";
    for(i=0;i<n;++i)
        cout<<ptr[i]<<" ";
 
    
}
int main(){
	int n;
	cout<<"How many elements:";
    cin>>n;
	no_empty_spaces(n);
}

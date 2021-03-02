#include<iostream>
using namespace std;
int main()
{
	int a,b=1;
	cout<<"Enter the number of rows:  ";
	cin>>a;
	for(int i=0;i<a;i++){
		
		for(int j=a-1;j>i;j--){
			
			cout<<" ";
		}
		for(int k=0;k<a;k++){
			
			cout<<"*";
		}
		
		b++;
	   cout<<"\n";
	}
	   
	
	return 0;
}

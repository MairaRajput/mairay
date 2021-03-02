#include<iostream>
using namespace std;
int main()
{
	int num1,num2,a=1;
	
	cout<<"Enter the number you want as base:  ";
	cin>>num1;
	cout<<"Enter the number you want as exponential:  ";
	cin>>num2;
	
	for(int i=1;i<=num2;i++)
	{
		a=a*num1;
	}
	
	cout<<a;
	
	return 0;
}

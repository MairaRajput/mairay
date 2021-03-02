#include<iostream>
using namespace std;
int main()
{    int l;
  cout<<"Enter a number of Lines:  ";
  cin>>l;
  
  for(int i=0;i<=l;i++)
  {      
	cout<<"\n";
	for(int k=i;k<=l;k++)
	{
	   	cout<<" ";
	}
  
  	for(int j=1;j<=i;j++)
  	{
	cout<<" ";
    cout<<"*";  } 
  }	
	return 0;
}


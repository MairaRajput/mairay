#include<iostream>
using namespace std;
int main()
{    int l;
  cout<<"Enter a number of Lines:  ";
  cin>>l;
    for(int i=0;i<=l;i++)
  {      
	cout<<"\n";
  	for(int j=0;j<=i;j++)
  	{ 
    cout<<"*";  }
  }	
  for(int i=0;i<=l;i++)
  {      
	cout<<"\n";
  	for(int j=l;j>=i;j--)
  	{
	  
    cout<<"*";  }
  }	
	return 0;
}

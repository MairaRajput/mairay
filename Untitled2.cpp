#include <iostream>
using namespace std;
int main()
{
 string sen ;
 int count=0;
 cout<<"Enter any word : ";
 getline (cin,sen);
 int l=sen.length();
 l=l-1;
 for(int i=l ; i>=0 ; i--)
 {
 if(sen[i]==32)
 {
 count++;
 }
 }
 count++;
 cout<<"number of words in sentence : "<<count;
}

#include <iostream>
#include <string.h>
using namespace std;
string wordcheck(string word1,string word2)
{
 int l ;
int co=0;
 string a;
 if(word1.length()>word2.length())
 {
 l=word1.length();
}
else if(word2.length()>word1.length())
 {
 l=word2.length();
}
else if(word1.length()==word2.length())
 {
 l=word1.length();
}
for(int i=0 ;i<l ; i++ )
{
if(word1[i]==word2[i])
{
co++;
}
}
if(co==l)
{
a="Both are same ";
 return a;
}
else
{
a="Not same ";
 return a;
}
}
int main()
{
 string word1 , word2;
 cout<<"Enter String : ";
 cin>>word1;
 cout<<"\nEnter String second : ";
 cin>>word2;
 string a= wordcheck(word1,word2);
 cout<<endl<<a;
}


#include <iostream>
using namespace std;
int main(){
   int num1;
   bool flag = true;
   cout<<"Enter a number: ";
   cin>>num1;

   for(int i = 2; i <= num1 / 2; i++) {
   if(num1 % i == 0) {
   flag = false;
    break;
    }
   }
   if (flag==true)
   cout<<num1<<" it is a prime number ";
   else
   cout<<num1<<" it is not a prime number ";
   return 0;
}



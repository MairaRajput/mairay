#include <iostream>
using namespace std;

int main()
{
   int a, b, gcd;

    cout << "Enter a value:  " ;
    cin >>a;
   
    cout << "Enter another value:  " ;
    cin >>b;

   for (int i = 1; i <= a && i <= b; i++)
   {
    if (a % i == 0 && b % i == 0)
    gcd = i;
   }

   cout << "\n GCD of " << a << " and " << b << " is: " << gcd << endl;

   return 0;
}

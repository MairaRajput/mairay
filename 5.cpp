#include <iostream>
using namespace std;
int main()
{int a,b,c,d,e,f,g,h;
	cout<<"\n\t\t\t\t\tKFC Menu";
	cout<<"\n\n Zinger Burger = 360";
	cout<<"\nChicken Burger = 260";
	cout<<"\nHot and crispy Chicken = 430";
	cout<<"\nSoftDrink regular  = 150";
	cout<<"\n\n\nPlease enter the number of Zinger:";
	cin>>a;
	cout<<"Please enter the number of Chicken Burger: ";
	cin>>b;
	cout<<"Please enter the number of hot and crispy Chicken: ";
	cin>>c;
	cout<<"Please enter the number of SoftDrink regular: ";
	cin>>d;
	
	e='a'*360;
	f='b'*260;
	g='c'*430;
	h='d'*150;
	
	cout<<"is your total bill:"<<e+f+g+h;
	
	return 0;
}

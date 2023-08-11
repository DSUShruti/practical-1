#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();

	cout<<"Enter the Value of Number a :: ";
	cin>>a;

	cout<<"Enter the Value of Number b :: ";
	cin>>b;

	temp=a;
	a=b;
	b=temp;

	cout<<"After Swapping Value of a is :: "<<a<<endl;

	cout<<"After Swapping Value of b is :: "<<b<<endl;

	getch();


}

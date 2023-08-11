#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,t,com_int;
	clrscr();

	cout<<"Enter the Principle of Amount :: ";
	cin>>p;

	cout<<"Enter the Rate of Interest    :: ";
	cin>>r;

	cout<<"Enter the Year of Term        :: ";
	cin>>t;

	com_int=p*(pow((1+r/100),t));

	cout<<"Compound Interest of given info. is :: "<<com_int<<endl;

	getch();


}

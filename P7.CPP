#include<iostream.h>
#include<conio.h>
void main()
{
	float p,r,t,interest;
	clrscr();

	cout<<"Enter the Principle of Amount :: ";
	cin>>p;

	cout<<"Enter the Rate of Interest    :: ";
	cin>>r;

	cout<<"Enter the Year of Term        :: ";
	cin>>t;

	interest=p*r*t/100;

	cout<<"Simple Interest of given info. is :: "<<interest<<endl;

	getch();


}

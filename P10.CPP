#include<iostream.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();

	cout<<"Enter the Number to Check :: ";
	cin>>n1;

	cout<<"Enter the Number to Check :: ";
	cin>>n2;

	cout<<"Enter the Number to Check :: ";
	cin>>n3;

	if(n1>n2 && n1>n3)
	{
		cout<<"First Number is Largest Number......";
	}
	else
	{
		if(n2>n3)
		{
			cout<<"Second Number is Largest Numer.....";
		}
		else
		{
			cout<<"Third Number is Largest Number.....";
		}
	}

	getch();


}

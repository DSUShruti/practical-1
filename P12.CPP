#include<iostream.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();

	cout<<"Enter the Number for Table :: ";
	cin>>num;

	for(i=1;i<=10;i++)
	{
		cout<<num<<"\t"<<"*\t"<<i<<"\t=\t"<<num*i<<endl;
	}

	getch();


}

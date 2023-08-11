#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],i;
	clrscr();

	for(i=0;i<10;i++)
	{
		cout<<"Enter Element of Array :: ";
		cin>>a[i];

	}

	cout<<"Negative Number are...."<<endl;

	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i];
		}
	}

	getch();


}

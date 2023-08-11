#include<iostream.h>
#include<conio.h>
int check_prime(num)
{
	int i,count;

	for(i=num;i>=1;i--)
	{
		if(num%i==0)
		{
			count=count+1;
		}
	}

	if(count==2)
	{
		cout<<"This is Prime Number.....";
	}
	else
	{
		cout<<"This isn't Prime Number.....";
	}

}
void main()
{
	int n;
	clrscr();

	cout<<"Enter the Number to Check :: ";
	cin>>n;

	check_prime(n);

	getch();

}

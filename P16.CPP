#include<iostream.h>
#include<conio.h>
int check_armstg(num)
{
	int rem,temp,sum=0;

	temp=num;

	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}

	if(sum==temp)
	{
		cout<<"This is Armstrong Number.....";
	}
	else
	{
		cout<<"This isn't Armstrong Number.....";
	}

}
void main()
{
	int n;
	clrscr();

	cout<<"Enter the Number to Check :: ";
	cin>>n;

	check_armstg(n);

	getch();

}

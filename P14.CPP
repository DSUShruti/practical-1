#include<iostream.h>
#include<conio.h>
int check_palindrome(num)
{
	int rem,temp,sum=0;

	temp=num;

	while(num>0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}

	if(temp==sum)
	{
		cout<<"This Number is Palindrome.....";
	}
	else
	{
		cout<<"This Number isn't Palindrome.....";
	}

}
void main()
{
	int n,rem,temp,sum=0;
	clrscr();

	cout<<"Enter the Number to Check :: ";
	cin>>n;

	check_palindrome(n);

	getch();

}

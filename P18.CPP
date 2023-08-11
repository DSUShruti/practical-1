#include<iostream.h>
#include<conio.h>
int cal_power(int n)
{
	cout<<"Power of Given Number is :: "<<n*n;
}
void main()
{
	int num;
	clrscr();

	cout<<"Enter the Number to print :: ";
	cin>>num;

	cal_power(num);

	getch();

}

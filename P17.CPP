#include<iostream.h>
#include<conio.h>
int print_fibo(int n)
{
	int i,f1=0,f2=1,f3;

	cout<<f1<<"\t"<<f2<<"\t";

	for(i=0;i<n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;

		cout<<f3<<"\t";
	}
}
void main()
{
	int num;
	clrscr();

	cout<<"Enter the Number to print :: ";
	cin>>num;

	print_fibo(num);

	getch();

}

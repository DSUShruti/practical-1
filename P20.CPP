#include<iostream.h>
#include<conio.h>
int sumofNnum(num)
{
	int i,fact=1;

	for(i=num;i>1;i--)
	{
		fact=fact*i;
	}

	cout<<"Factorial of given Number is :: "<<fact<<endl;

}
void main()
{
	int n;
	clrscr();

	cout<<"Enter the Number for finding Factorial:: ";
	cin>>n;

	sumofNnum(n);

	getch();


}

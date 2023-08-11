#include<iostream.h>
#include<conio.h>
int sumofNnum(num)
{
	int i,sum=0;

	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}

	cout<<"Sum of First N Natural Number is :: "<<sum<<endl;

}
void main()
{
	int n;
	clrscr();

	cout<<"Enter the Number for Sum :: ";
	cin>>n;

	sumofNnum(n);

	getch();


}

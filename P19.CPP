#include<iostream.h>
#include<conio.h>
void main()
{
	int choice,n1,n2;
	clrscr();

	cout<<"Enter the First Number  :: ";
	cin>>n1;

	cout<<"Enter the Second Number :: ";
	cin>>n2;

	cout<<"Addtion=1"<<endl;
	cout<<"Substraction=2"<<endl;
	cout<<"Multiplication=3"<<endl;
	cout<<"Division=4"<<endl;
	cout<<"Modulo=5"<<endl;

	cout<<"Enter Your Choice Betweent 1 to 5 :: ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cout<<n1+n2;
			break;

		case 2:
			cout<<n1-n2;
			break;
		case 3:
			cout<<n1*n2;
			break;
		case 4:
			cout<<n1/n2;
			break;
		case 5:
			cout<<n1%n2;
			break;
	}

	getch();

}

#include<iostream.h>
#include<conio.h>
int check_v_c(char c)
{

	if(c=='A' && c=='a')
	{
		cout<<"Given Character is Vowel......";
	}
	else if(c=='E' && c=='e')
	{
		cout<<"Given Character is Vowel......";
	}
	else if(c=='I' && c=='i')
	{
		cout<<"Given Character is Vowel......";
	}
	else if(c=='O' && c=='o')
	{
		cout<<"Given Character is Vowel......";
	}
	else if(c=='U' && c=='u')
	{
		cout<<"Given Character is Vowel......";
	}
	else
	{
		cout<<"Given Character is Consonant......";
	}

}
void main()
{
	char cha;
	clrscr();

	cout<<"Enter any Character to Check :: ";
	cin>>cha;

	check_v_c(cha);

	getch();


}

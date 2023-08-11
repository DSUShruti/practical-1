#include<iostream.h>
#include<conio.h>
class temp
{
	public:
		float f,c;
	public:
		void getdata()
		{
			cout<<"Enter Fahrenheit  :: ";
			cin>>f;
		}
		void putdata()
		{
			c=9/5*(32*f-32);

			cout<<"Value of Fahrenheit in Calcius :: "<<c<<endl;
		}
};
void main()
{
	temp t1;
	clrscr();
	t1.getdata();
	t1.putdata();

}

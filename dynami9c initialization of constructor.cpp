#include<iostream>
using namespace std;
class fixed_deposit
{
	long int p_amount;
	int year;
	float rate;
	float r_value;
	public:
		fixed_deposit()
		{
		}
		fixed_deposit(long int p,int y,float r=0.12)
		{ p_amount=p;
		year=y;
		rate=r;
		r_value=p_amount;
		for(int i=1;i<=y; i++)
		r_value=r_value*(1.0+r);
		}
	
		fixed_deposit(long int p,int y,int r)
		{ p_amount=p;
		year=y;
		rate=r;
		r_value=p_amount;
		for(int i=1;i<=y; i++)
		r_value=r_value*(1.0+float(r)/100);
		}
				int display()
		{
			cout<<"\n";
			cout<<" principal amount :- "<<p_amount<<"\n";
			cout<<" return value :- "<<r_value<<"\n";
		}
};
int main()
{
	fixed_deposit f1,f2,f3;
	long int p;
	int y;
	float r;  // intrest rate, decimal form
	int x;  // intrest rate, percent form
	cout<<" enter amount, period, intresrt  rate( in percent )"<<"\n";
	cin>>p>>y>>x;
	f1=fixed_deposit(p,y,x);
	cout<<" enter amount, period, intresrt  rate( in decimal form )"<<"\n";
	cin>>p>>y>>r;
	f2= fixed_deposit(p,y,x);
		cout<<" enter amount, period "<<"\n";
	cin>>p>>y;
	f3=fixed_deposit(p,y);
	cout<<"\n deposit 1";
	f1.display();
	cout<<"\n deposit 2";
	f2.display();
	cout<<"\n deposit 3";
	f3.display();
return 0;
}

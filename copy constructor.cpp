#include<iostream>
using namespace std;
class code{
	int id;
	public:
		code()
		{
		}
	code(int a)
	{
		id=a;
	}
	code(code &x )
	{
		id=x.id;
	}
	int display()
	{
		cout<<id<<" ";
	}
};
int main()
{
	code a(100);
	code d;
	code b(a);
	code c=a;
	d=a;
	a.display();
	b.display();
	c.display();
	d.display();
	}


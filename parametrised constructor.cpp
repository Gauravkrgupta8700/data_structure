#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
		public:
			complex(int x, int y)
			{
				a=x; b=y;
		cout<<"a : "<<a<<" "<<" b : "<<b;
			}
			complex()
			{
				a=0;  b=0;
		cout<<"a : "<<a<<" "<<" b : "<<b;
			}
	complex(int k)
	{   a=k;
	cout<<"a : "<<a<<" "<<" b : "<<b;
	}
};
int main ( )
{
	complex c1=4;
}

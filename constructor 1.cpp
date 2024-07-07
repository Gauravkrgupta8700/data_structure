#include<iostream>
using namespace std;
class complex
{
	private :
		int a;
		public:
			complex()
			{
				cout<<" you are in constructor"<<endl;
			}
};
int main()
{
	complex c1[5];
}

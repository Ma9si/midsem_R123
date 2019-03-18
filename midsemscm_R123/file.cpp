#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
	test()
	{ a=67;
		b=56;
	}
};
int main()
{
	test t1;
	cout<<t1.a;
	cout<<t1.b;
}

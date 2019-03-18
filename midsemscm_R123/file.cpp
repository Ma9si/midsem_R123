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
	test(int x,inty)
	{a=x;
		b=y;
	}
};
int main()
{
	test t1;
	cout<<t1.a;
	cout<<t1.b;
	test t2(4,5);
}

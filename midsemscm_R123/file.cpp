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
test(test&obj)
{
	a=obj.a;
	b=obj.b;
}
	
};
int main()
{
	test t1;
	cout<<t1.a;
	cout<<t1.b;
	test t2(4,5);
	test t3(t2);
}

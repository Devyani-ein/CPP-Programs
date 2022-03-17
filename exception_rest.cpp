#include<iostream>

using namespace std;

int main()
{
	void Demo()throw(int,double)
	{
		int a=2;
			if(a==1)
		throw a;
			else if(a==2)
		throw 'A';
			else if(a==3)
		throw 4.5;
	}

return 0;
}

#include<iostream>
using namespace std;

class A
{
	public:z
	protected:y
	private:x
/*{
	void display1(){
	cout<<z;
	cout<<y;
	cout<<x;
	
}*/
};
class B:public A{
	void display2(){
	cout<<z;
	cout<<y;
	cout<<x;
	
}
};
class C:public B{
	void display3(){
	cout<<z;
	cout<<y;
	cout<<x;
}	
};

int main()
{
	A a1;
	B b1;
	C c1;
	a1.display1();
	b1.display2();
	c1.display3();
	c1.display2();
	b1.display1();	
	return 0;

}


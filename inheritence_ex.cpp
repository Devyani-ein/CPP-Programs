#include<iostream>

using namespace std;
class A{
	public:
	void displayA(){cout<<"Class A";}
};
class B{
	public:
	void displayB(){cout<<"Class B";}
};
class C:public A{
	public:
	void displayC(){cout<<"Class C";}
};
class D:public B{
	public:
	void displayD(){cout<<"Class D";}
};
class E:public C,public D{
	public:
	void displayE(){cout<<"Class E";}
};
class F:public E{
	public:
	void displayF(){cout<<"Class F";}
};

int main(){
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	
	a.displayA();
	f.displayA();
	f.displayC();
	f.displayB();
	f.displayE();

	e.displayA();
	e.displayB();
	e.displayC();
	
	return 0;
}

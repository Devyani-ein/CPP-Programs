#include<iostream>
using namespace std;

class Car{public:
	int tyre=4;
	void display1(){
	cout<<"inside car";
	}
};
class Audi:public Car{
public:
	int gear=2;
	void display2(){
	cout<<"\ninside audi";
	}
};

int main()
{
	Car c1;
	Audi a1;
	c1.display1();
	a1.display2();
	a1.display1();
	return 0;

}


#include<iostream>
using namespace std;

class Car
{
	public:
	void display1(){
	cout<<"\nCar Class";
	}
};
class FuelCar:public Car{
	public:
	void display2(){
	cout<<"\nFuelCar class";
	}
};
class GasCar:public Car{
	public:
	void display3(){
	cout<<"\nGasCar class";	
}
};
class Hybrid:public FuelCar,public GasCar{
	public:
	void display4(){
	cout<<"\nHybrid class";
}
};

int main()
{
	Car c;
	FuelCar f;
	GasCar g;
	Hybrid h;
	c.display1();
	f.display2();
	g.display3();
	h.display4();
	h.display3();
	h.display2();	
	return 0;

}


//Demo code for operation overloading: '+'operator

#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
	//default constructor
	Complex(){
	real=0;
	img=0;
	}
	//param const
	Complex(int x,int y){
	real=x;
	img=y;
	}
	//display functions
	void display(){
	cout<<"The real part: "<<real<<"and img part: "<<img<<endl<<endl;
	}

	//overload the '+' operator
	Complex operator+(Complex ob){
	Complex temp;	
	temp.real=real+ob.real;
	temp.img=img+ob.img;
	return temp;

	//overload the '-' operator
	Complex operator-(Complex ob){
	Complex temp;	
	temp.real=real-ob.real;
	temp.img=img-ob.img;
	return temp;

	}
//int add(Complex c)
};//end of Complex class
int main(){
	Complex c1,c2(5,5);
	c1.display();	
	c2.display();

	Complex c3;
	//c3=c1+c2;
	c3=c1.operator +(c2);	
	c3.display();
	c3=c1.operator -(c2);	
	c3.display();
	

return 0;
}


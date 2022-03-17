#include<iostream>
using namespace std;
class Measure
{
	public:
	int height;
	int length;
	int width;
	void setInput(int a,int b,int c)
	{
		length=a;
		width=b;
		height=c;	
	}
	int area()
	{
		return length*width;
	}
	int volume()
	{
		return length*width*height;
	}
};
int main()
{
	Measure obj1,obj2;
	cout<<"Enter the length : ";
	cin>>obj1.length;
	cout<<"Enter the width : ";
	cin>>obj1.width;
	cout<<"Enter the height : ";
	cin>>obj1.height;
	obj1.setInput(obj1.length,obj1.width,obj1.height);
	cout<<"The area for obj1 "<<obj1.area() <<endl;
	cout<<"The volume for obj1 "<<obj1.volume() <<endl<<endl<<endl;
	cout<<"Enter the length : ";
	cin>>obj2.length;
	cout<<"Enter the width : ";
	cin>>obj2.width;
	cout<<"Enter the height : ";
	cin>>obj2.height;
	obj2.setInput(obj2.length,obj2.width,obj2.height);
	cout<<"The area for obj2 "<<obj2.area() <<endl;
	return 0;
}


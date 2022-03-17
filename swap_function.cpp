#include<iostream>

using namespace std;

template<typename T1,typename T2>

void Swap(T1 &n1,T2 &n2)
{
	T1 temp;
	temp=n1;
	n1=n2;
	n2=temp;
}

/*int main()
{
	int a;
	long b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Before Swapping: a= "<<a<<"b= "<<b<<endl;
	cout<<"After Swapping:";
	Swap(a,b);
	cout<<"a= "<<a<<"b= "<<b<<endl;
	return 0;
}*/

int main()
{
	string a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Before Swapping: a= "<<a<<"b= "<<b<<endl;
	cout<<"After Swapping:";
	Swap(a,b);
	cout<<"a= "<<a<<"b= "<<b<<endl;
	return 0;
}

#include<iostream>
using namespace std;
class A{
	public:
	int i,j,k,l,m;
	A(){
	cout<<"Inside the const" << endl;
	i=0;
	j=10;
	}
	~A(){
	cout<<"Inside the des" << endl;
	}
};

int main(){
//declaration of variables
	int *ptr1,*ptr2,sum;
	A *a2, *a3;
	ptr1=new int; *ptr1=5;
	ptr2=new int; *ptr2=1;
	sum=*ptr1+*ptr2;
	cout<<"Sum is: " << sum <<endl;

	a2=new A;

	int *arr=new int [5];
	a3=new A [4];

	delete ptr1;
	delete ptr2;
	delete arr;
	delete [] a3;
return 0;


}

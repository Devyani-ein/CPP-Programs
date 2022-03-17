#include<iostream>

using namespace std;
int main()
{
int num1,num2,num3;
cout<<"Enter number 1: ";
cin>>num1;
cout<<"Enter number 2: ";
cin>>num2;

try{
	if(num2==0)
		throw num2;
	else{
		num3=num1/num2;
		cout<<"\nThe result is:"<<num3;
	}
 }
catch(int x){
	cout<<"\nCant divide by:"<<x;
}

cout<<"\nEnd of program.";
}

//inline function

#include<iostream>
using namespace std;

inline int cube(int s){
	cout<<"inside the function" << endl;
	return s*s*s;
}

int main()
{
	//cout<<"Cube of the value 5 is: "<< cube(5) << endl;
	cout<<"Cube of value 5 is : ";
	cout<<"Inside the function" << endl << 5*5*5 << endl;

return 0;

}


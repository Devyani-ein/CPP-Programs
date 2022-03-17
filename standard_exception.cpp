#include<iostream>
#include<exception>

using namespace std;

int main(){
	try{
		int* myarray=new int[10000000000000000000];
		cout<<"Successful"<<endl;
	}
	catch(exception &e){
		cout<<"Std exception"<<e.what()<<endl;
	}
return 0;
}

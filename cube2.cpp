#include<iostream>
using namespace std;

int cubevolume(int l=5,int w=6,int h=7)
{
	l=l++;
	w=w-1;
	h=h+l;	

	return (l*w*h);
}
int main()
{

cout<<cubevolume()<<endl<<endl;
cout<<cubevolume(9)<<endl<<endl;
cout<<cubevolume(15,12)<<endl<<endl;
cout<<cubevolume(3,4,7)<<endl<<endl;
}

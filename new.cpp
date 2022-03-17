#include<iostream>
using namespace std;
int main()
{
	float *pt=new float;
	*pt=55;
	cout<<"value="<<*pt;
	cout<<"\nadd="<<pt;
	cout<<"\nsize="<<sizeof(*pt);
	cout<<"\nsize="<<sizeof(pt);
	cout<<"\nsize="<<sizeof(&pt);

return 0;


}

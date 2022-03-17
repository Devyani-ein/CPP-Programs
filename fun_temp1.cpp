//Template
#include <iostream>
using namespace std;
template <typename T>
T sum(T x, T y)
{
T s =x + y;
return s;
}

int main()
{
int a=3 ,b =7,c;
double A=5.9 ,B = 9.6,C;
c= sum(a,b);
cout <<"Sum of int : "<< c << endl;
C= sum(A,B);
cout <<"Sum of double : "<< C << endl;
//if u dont want to write upper main ,just un_comment the bottom and remove the upper main data
/*
cout <<"Sum of int : "<< sum<int>(3, 7) << endl;
cout <<"Sum of double : "<< sum<double>(3.5, 7.5) << endl;
*/
return 0;
}

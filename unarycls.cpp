#include<iostream>
using namespace std;

class multiply;

class add
{

public:
int x, y;

//default constructor
add()
{
x=0;
y=0;
}

//param constructor
add(int a, int b)
{
x=a;
y=b;
}

//declaring friend function
friend multiply operator * (add obj);

//overloading + operator
add operator + (multiply obj)
{
add temp;

temp.x = x + obj.p;
temp.y = y + obj.q;

return temp;
}


//defining display function
void display()
{
cout << "X: " << x << " Y: " << y << endl;
}

}; //end of class add


class multiply
{

public:
int p, q;

//default constructor
multiply()
{
p=1;
q=1;
}

//param constructor
multiply(int a, int b)
{
p=a;
q=b;
}

//declaring friend function
friend add operator + (multiply obj);

//overloading * operator
multiply operator * (add obj)
{
multiply temp;

temp.p = p * obj.x;
temp.q = q * obj.y;

return temp;
}


//defining display function
void display()
{
cout << "P: " << p << " Q: " << q << endl;
}

}; //end of class multiply

int main()
{
add a(3,5);
multiply m(6,4);

a.display();
m.display();
return 0;
}


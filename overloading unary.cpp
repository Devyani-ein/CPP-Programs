// Overloading Unary
//Devyani Mahale
#include<iostream>
using namespace std;

class Complex{
    int x,y,z;
    
    public:
        //default const
        Complex(){
            x=0;
            y=0;
            z=0;
        }
        
        //para const
        Complex(int a, int b, int c){
            x=a;
            y=b;
            z=c;
        }
        
        //display function
        void display(){
            cout<<"\nx= "<< x << " ,y "<< y << " ,z "<< z <<endl<<endl;
}

    Complex operator --();

};  //  end of complex class

Complex Complex::operator--(){
    Complex t;
    t.x--;
    t.y--;
    t.z--;
    
    return t;
    
    /*
    x=--x;
    y=--y;
    z=--z;
    */
}

int main(){
    Complex c1(5,4,3),c2(10,16,18);
    c1.display();
    cout<<"-------------------------------------------------------";
    --c1;
    c1.display();
    cout<<"-------------------------------------------------------";
    cout<<"-------------------------------------------------------";
    c2 = --c1;
    c2.display();
    
return 0;
    
}
//Devyani Mahale
//friend function used to print the length of a box.


#include <iostream>    
using namespace std;    
class Box    
{    
    private:    
        int length;    
    public:    
        Box(): length(0) { }    
        friend int printLength(Box); //friend function    
};    
int printLength(Box b)    
{    
   b.length += 10;    
    return b.length;    
}    
int main()    
{    
    Box b;    
    cout<<"Length of box: "<< printLength(b)<<endl;    
    return 0;    
}   



---------------------------------------------------------------------


#include<iostream>
using namespace std;

int myfun(int i);
int myfun(int i,int j);
int myfun(int i,int j, int k);


int main()
{
    cout<<"calling myfun(10)"<<myfun(10)<<endl;
    cout<<"calling myfun(10,20)"<<myfun(10,20)<<endl;
    cout<<"calling myfun(10,20,30)"<<myfun(10,20,30)<<endl;
        return 0;
}

int myfun(int i){
    return i;
}


int myfun(int i, int j){
    return i+j;
}

int myfun(int i,int j, int k){
    return i+j+k;
} 



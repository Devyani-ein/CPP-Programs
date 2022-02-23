/*
// C++ program to demonstrate the use of default constructor
#include <iostream>
using namespace std;
// declare a class
class  Wall {
 
   
  public:
    // default constructor to initialize variable
     double length;
    double height;
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
   
   
   
     Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }
    double calculateArea() {
      return length * height;
    }
};
int main() {
  Wall Wall1;
 
  Wall wall1(10.5, 8.6);
  //Wall wall2(8.5, 6.3);
  cout << "Area of Wall 1: " << Wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << Wall1.calculateArea();
 
 
   // copy contents of wall1 to wall2
  Wall wall2 = wall1;
  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();
 
 
  return 0;
}
*/




//example of friend function used to print the length of a box.
 //Devyani Mahale

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




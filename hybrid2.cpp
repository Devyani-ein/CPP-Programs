#include<iostream>

using namespace std;

class Student{
public:
	int rollno;
	char name[20];
	
	void display1() {
	cout<<"\nEnter Rollno: ";
	cin>>rollno;
	cout<<"\nEnter Name: ";
	char temp=getchar();
	cin.getline(name,sizeof(name));
	}
};

class Test{
public:
	int marks[5];

	void display2(){
	cout<<"\nEnter marks of 5 Subjects";
	for(int i=1;i<=5;i++){
	cin>>marks[i];
	}
	}
};

class Result:public Student, public Test{
public:
	int totalmarks=0,percentage=0;
	
	void total(){
		for(int i=1;i<=5;i++){
			totalmarks+=marks[i];
		}
		cout<<"Total Marks:"<<totalmarks<<endl;	
	}
	
	void percent(){
	percentage=totalmarks/5;
	cout<<"Percentage: "<<percentage<<endl;
	}

};
int main()
{
	Student s;
	Test t;
	Result r;
	r.display1();
	r.display2();
	r.total();
	r.percent();
	return 0;
}

/*
Write a cpp code that has two classes Time and Date
The time class:
 Three private members: hour, minute, second
Three member functions sleepTime(), setTime() and getTime()
    setTime(): Finds current time and sets values for three variables
    getTime(): No arguments, returns the values of three variables
    sleep Time(): Takes two argument of Time type, finds the difference between them, returns a Time variable that holds values
The date class:
Three public members: day, month, year
Member functions:
    setDate(): Reads current date and sets values to three variables, returns Date object with current date
    getDate(): No arguments, returns a Date type variable containing values of three variables
    setDoB(): Takes three integer arguments, creates a local Date object, sets the argument values to the corresponding variables, returns a Date object with updated values
    findAge(): Takes one Date type argument, calls setDate() to get the current date. finds the difference between two dates and prints the age on the terminal. Returns nothing.
How to get current time: https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
*Date : 18-feb-2022
*Devyani Mahale
*/
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <cstdlib>
using namespace std;
class Time
{
public:
 int hour, mint, sec;
 void setTime(){
    time_t tt;
     // reading current time as per IST
    struct tm *ti;
    time (&tt);
    ti = localtime (&tt);
    cout << asctime(ti) << endl;
    // cout <<"Hour:" << (5+ti->tm_hour) % 24 << endl;
    // cout <<"Mint: " <<30+ti->tm_min <<endl;
    // cout <<"sec: " <<ti->tm_sec <<endl;
    // asinging values to Local variable
    hour= (5+ti->tm_hour) % 24;
    mint=30+ti->tm_min;
    sec= ti->tm_sec;
}
Time getTime()
{
    Time temp;
    temp.hour=hour;
    temp.mint=mint;
    temp.sec=sec;
return temp;
}

Time sleepTime(Time napTime, Time wakeup)
{
    Time temp;
    temp.hour=wakeup.hour-napTime.hour;
    temp.mint=wakeup.mint-napTime.mint;
    temp.sec=wakeup.sec-napTime.sec;
    return temp;
}
};
/*
*Date
*/
class Date
{
public:
 int day, month, year;
 
 void setDate(){
   time_t now = time(0);
  // cout << "Number of sec since January 1,1970 is:: " << now << endl;
   tm *ltm = localtime(&now);
   // print various components of tm structure.
   
//   cout << "Year:" << 1900 + ltm->tm_year<<endl;
//   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
//   cout << "Day: "<< ltm->tm_mday << endl;
   
    year=1900 + ltm->tm_year;
    month=1 + ltm->tm_mon;
    day=ltm->tm_mday;
}

Date getDate()
{
    Date temp;
    temp.day=day;
    temp.month=month;
    temp.year=year;
return temp;
}

Date setDoB(Date dte)
{
    Date dob;
    dob.day=dte.day;
    dob.month=dte.month;
    dob.year=dte.year;
    return dob;
}
Date findAge(Date dob)
{
    Date now,d2,age;
    d2.setDate();
    now = d2.getDate();
   
    age.day = now.day - dob.day;
    age.month = now.month - dob.month;
    age.year = now.year - dob.year;
   
    return age;
}
};


   
int main()
{
    Time t1,t3;
Time timeatsleep,timeatWake;
t1.setTime();
t3=t1.getTime();
  cout<<"values return from getTime\n";
  cout<<"hour:" <<t3.hour <<" Mint:"<<t3.mint<<" sec:"<<t3.sec<<endl;
  cout<<"\nCalculating sleep time"<<endl;
    //read the time before sleep
t1.setTime();
timeatsleep=t1.getTime();
//goto sleep
sleep(4);
//read the time after waking wakeup
t1.setTime();
timeatWake=t1.getTime();
// find the difference
//t1.setTime();// if sleepTime not print please uncomment this line
t3=t1.sleepTime(timeatsleep,timeatWake);
cout<<"\nTime spent sleeping"<<endl;
cout<<"hour:" <<t3.hour <<" Mint:"<<t3.mint<<" sec:"<<t3.sec<<endl;

   
//*****************************
//Age
    Date dte;
    dte.setDate();
    Date d=dte.getDate();
    cout<<"DD-MM-YYYY = " <<d.day <<"/"<<d.month<<"/"<<d.year<<endl;
    Date dob;
    int a,b,c;
    cout<<"Enter Birth Details : DD/MM/YYYY"<<endl;
    cin>>a>>b>>c;
    dob.day=a;//20;
    dob.month=b;//12;
    dob.year=c;//1999;
   
    Date d1 = dte.setDoB(dob);
    Date  age = dte.findAge(d1);
    cout<<"your age is : " <<age.year <<" Years "<<age.month<<" Months"<<age.day<<endl;

return 0;
}

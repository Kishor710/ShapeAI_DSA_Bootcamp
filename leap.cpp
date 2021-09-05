#include <iostream>
using namespace std;

int main() {
   int year;
   
   cout<<"Enter a Year to check Leap or Not: "<<endl;
   cin>>year;
   
   if(( year%400==0 )||( year%4==0 && year%100!=0 ))
   {
       cout<<"Yes it is a Leap Year!!"<<endl;
   }
   else
   {
       cout<<"Not a leap Year!!"<<endl;
   }
    return 0;
}
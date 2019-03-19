#include<iostream>
using namespace std;
class student    //base class
{
int roll;
char name[20];
public:
void getdata()
{
cin>>roll>>name;
}
void print()
{
cout<<roll<<name;
}
};
class test:public student  //intermediate class
{
int s1,s2,s3;
public:
float avg;
void getdata()
{
student::getdata();
cin>>s1>>s2>>s3;
}
void calculate()
{
avg=(s1+s2+s3)/3;
cout<<avg;
}
};
class total:public test  //child class
{
public:
void printdata()
{
test::getdata();
test::calculate();
}
};
int main()
{
total ob;
ob.printdata();
}

#include<iostream>
using namespace std;
class student    //1st class
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
class test  //2nd class
{
int s1,s2,s3;
public:
float avg;
void getdata1()
{
cin>>s1>>s2>>s3;
}
void calculate()
{
avg=(s1+s2+s3)/3;
cout<<avg;
}
};
class total:public test,public student  //child class
{
public:
void printdata()
{
getdata();
getdata1();
test::calculate();
}
};
int main()
{
total ob;
ob.printdata();
return 0;
}

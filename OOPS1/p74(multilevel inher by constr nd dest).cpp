#include<iostream>
using namespace std;
class student
{
int roll;
char name[20];
public:
student()
{
cin>>roll>>name;
}
~student()
{
cout<<"destroyed";
}
void print()
{
cout<<roll<<name;
}
};
class test:public student
{
int s1,s2,s3;
public:
float avg;
test()
{
cin>>s1>>s2>>s3;
}
~test()
{
cout<<endl<<"destr2";
}
void calculate()
{
avg=(s1+s2+s3)/3;
cout<<avg;
}
};
class total:public test
{
public:
total()
{
test::calculate();
}
};
int main()
{
total ob;
}

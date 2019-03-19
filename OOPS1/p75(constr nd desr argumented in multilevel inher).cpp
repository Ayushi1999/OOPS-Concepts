#include<iostream>
#include<string.h>
using namespace std;
class student
{
int roll;
char name[20];
public:
student(int r,char n[])
{
roll=r;
strcpy(name,n);
cout<<"student ";
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
test(int r,char n[],int a,int b,int c):student(r,n)
{
s1=a;
s2=b;
s3=c;
cout<<"test ";
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
total(int r,char n[],int a,int b,int c):test(r, n,a,b,c)
{
test::calculate();
cout<<"total ";
}
};
int main()
{
total ob(12,"ayushi",3,4,5);
return 0;
//ob.printdata();
}

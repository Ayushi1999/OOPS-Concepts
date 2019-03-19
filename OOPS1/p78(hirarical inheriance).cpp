#include<iostream>
using namespace std;
class student
{
protected:
int rollno;
char name[20];
public:
void getdata()
{
cin>>rollno;
cin>>name;
}
void print()
{
cout<<rollno;
cout<<name;
}
};
class test:public student
{
int s1,s2,s3;
public:
void getdata()
{
student::getdata();
print();
cin>>s1>>s2>>s3;
}
void check()
{
float avg;
avg=(s1+s2+s3)/3;
cout<<endl<<avg;
}
};
class doe:public student
{
public:
void calculate()
{
getdata();
rollno=rollno+2;
cout<<endl<<rollno;
}
};
int main()
{
test t;
t.getdata();
doe d;
d.calculate();
return 0;
}

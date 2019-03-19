#include<iostream>
using namespace std;
class emp
{
char name[20],dept[30];
int eno;
public:
void get()
{
cin>>eno>>name>>dept;
}
};
class salary:public emp
{
float basic,hr,da,total;
public:
void get()
{
cin>>basic;
cin>>hr>>da;
}
void calculate()
{
total=basic+da+hr;
}
void display()
{
cout<<total;
}
};
int main()
{
int n;
salary ob[20];
int i;
for(i=0;i<2;i++)
{
ob[i].emp::get();
//ob[i].get();
ob[i].get();
ob[i].calculate();
ob[i].display();
}
return 0;
}

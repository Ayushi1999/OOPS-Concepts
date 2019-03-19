#include<iostream>
using namespace std;
class emp
{
char name[20],dept[30];
int eno;
public:
emp()
{
cin>>eno>>name>>dept;
}
~emp()
{
cout<<"destr1";
}
};
class salary:public emp
{
float basic,da,hr,total;
public:
salary()
{
cin>>basic;
cin>>hr>>da;
}
~salary()
{
cout<<"destr2";
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
cin>>n;
salary ob[n];
int i;
for(i=0;i<n;i++)
{
ob[i].calculate();
ob[i].display();
}
return 0;
}

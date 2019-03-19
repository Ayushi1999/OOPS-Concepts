#include<iostream>
#include<string.h>
using namespace std;
class emp
{
char name[20],dept[30];
int eno;
public:
emp(int a,char b[],char c[])
{
eno=a;
strcpy(name,b);
strcpy(dept,c);
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
salary(int a,char b[],char c[]):emp(a,b,c)
{
cin>>basic;
cin>>da;
cin>>hr;
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
salary ob(1,"ee","rr");
ob.calculate();
ob.display();
return 0;
}

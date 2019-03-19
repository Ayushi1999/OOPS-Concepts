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
salary(int a,char b[],char c[],int d,int e,int f):emp(a,b,c)
{
basic=d;
da=e;
hr=f;
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
salary ob=salary(1,"ee","rr",1,2,3);
return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
class emp
{
char name[20],dept[30];
int eno;
public:
emp()
{
cin>>eno;
cin>>name>>dept;
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
salary(int a,int b,int c)
{
basic=a;
da=b;
hr=c;
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
salary ob(1,2,3);
ob.calculate();
ob.display();
return 0;
}

#include<iostream>
using namespace std;
#include<string.h>
class base
{
char name[15];
int age;
public:
base(char n[15],int a)
{
strcpy(name,n);
age=a;
}
void show()
{
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
}
~base()
{
cout<<"Destructor of base class is executed"<<endl;
}
};
class derived1:public base
{
int salary;
public:
derived1(char n[15],int a,int s):base(n,a)
{
salary=s;
}
void show1()
{
cout<<"Salary: "<<salary<<endl;
}
~derived1()
{
cout<<"Destructor of derived1 class is executed"<<endl;
}
};
class derived2:public base
{
int salary;
public:
derived2(char n[15],int a,int s):base(n,a)
{
salary=s;
}
void show2()
{
cout<<"Salary: "<<salary<<endl;
}
~derived2()
{
cout<<"Destructor of derived2 class is executed"<<endl;
}
};
int main()
{
//clrscr();
cout<<"Data for first person:"<<endl;
derived1 d1("abc",21,25000);
d1.show();
d1.show1();
cout<<"data for second person:"<<endl;
derived2 d2("xyz",25,30000);
d2.show();
d2.show2();
}

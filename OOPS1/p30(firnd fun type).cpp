#include<iostream>
using namespace std;
class c2;
class c1
{
private:
int a;
public:
void get_data()
{
cin>>a;
}
void swap1(c2 &o);
void print()
{
cout<<a<<" ";
}
};
class c2
{
int b;
public:
void get_data()
{
cin>>b;
}
friend void c1::swap1(c2 &o);
void print()
{
cout<<b<<" ";
}
};
void c1::swap1(c2 &o)
{
int t=a;
a=o.b;
o.b=t;
}
int main()
{
c1 ob1;
c2 ob2;
ob1.get_data();
ob2.get_data();
ob1.swap1(ob2);
ob1.print();
ob2.print();
return 0;
}

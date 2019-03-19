#include<iostream>
using namespace std;
class c3;
class c2;
class c1
{
int rollno;
public:
void get_data()
{
cin>>rollno;
}
friend void c3::print(c1 &o,c2 &o1);
};
class c2
{
int m;
public:
void get_data()
{
cin>>m;
}
friend void c3::print(c1 &o,c2 &o1);
};
class c3
{
int m1,m2,m3;
public:
void get_data()
{
cin>>m1>>m2>>m3;
}
void print(c1 &o,c2 &o1);
};
void c3::print(c1 &o,c2 &o1)
{
cout<<o.rollno<<" "<<o1.m<<" ";
cout<<m1<<" "<<m2<<" "<<m3;
}
int main()
{
c1 p1;
c2 p2;
c3 p3;
p1.get_data();
p2.get_data();
p3.get_data();
p3.print(p1,p2);
return 0;
}

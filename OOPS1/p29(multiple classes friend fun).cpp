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
friend void swap1(c1 &ob1,c2 &ob2);
void print()
{
cout<<a<<" ";
}
};
class c2
{
int b;
public:
void get_data1()
{
cin>>b;
}
void print()
{
cout<<b<<" ";
}
friend void swap1(c1 &ob1,c2 &ob2);
};
void swap1(c1 &ob1,c2 &ob2)
{
int t=ob1.a;
ob1.a=ob2.b;
ob2.b=t;
}
int main()
{
c1 ob1;
c2 ob2;
ob1.get_data();
ob2.get_data1();
swap1(ob1,ob2);
ob1.print();
ob2.print();
return 0;
}




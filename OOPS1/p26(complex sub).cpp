#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
void get_data()
{
cin>>a>>b;
}
complex check(complex &o)
{
complex t;
t.a=o.a-a;
t.b=o.b-b;
//cout<<t.a<<t.b;
}
void print()
{
cout<<a<<"-"<<b<<"i";
}
};
int main()
{
complex ob1,ob2,ob3;
ob1.get_data();
ob2.get_data();
ob3=ob2.check(ob1);
ob3.print();
return 0;
}

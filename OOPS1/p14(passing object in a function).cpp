#include<iostream>
using namespace std;
class abc
{
private:
int v;
public:
void getdata()
{
cin>>v;
}
void sum(abc o,abc o1)
{
v=o.v+o1.v;
print();
}
void print()
{
cout<<v;
}
};
int main()
{
abc ob1,ob2,ob3;
ob1.getdata();
ob2.getdata();
ob3.sum(ob1,ob2);
return 0;
}

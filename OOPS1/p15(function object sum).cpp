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
abc sum(abc o)
{
abc temp;
temp.v=v+o.v;
return temp;
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
ob3=ob1.sum(ob2);
ob3.print();
return 0;
}

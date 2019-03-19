#include<iostream>
using namespace std;
class abc
{
int x,y;
public:
abc():x(0),y(0)
{
}
abc(int a,int b)
{
x=a;
y=b;
}
void print()
{
cout<<x<<" "<<y;
}
void operator -()
{
x=-x;
y=-y;
}
};
int main()
{
abc p(3,4);
p.operator -();
//-p;
p.print();
}

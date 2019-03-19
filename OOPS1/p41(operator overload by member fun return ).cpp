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
abc operator -()
{
abc l;
l.x=-x;
l.y=-y;
return l;
}
};
int main()
{
abc p(1,2);
abc k;
k=p.operator -();
//-p;
k.print();
}

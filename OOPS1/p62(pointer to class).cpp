#include<iostream>
using namespace std;
class Rect
{
public:
int l,b;
Rect()
{
l=0;
b=0;
}
Rect(int x,int y)
{
l=x;
b=y;
}
void print()
{
cout<<l<<" "<<b;
}
};
int main()
{
Rect *p=new Rect(2,3);
int Rect::*p1=&Rect::l;
int Rect::*p2=&Rect::b;
cout<<p->*p1;
cout<<p->*p2;
return 0;
}

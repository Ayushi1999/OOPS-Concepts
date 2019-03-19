#include<iostream>
using namespace std;
class c1
{
int x,y;
public:
c1():x(0),y(0)
{

}
c1(int a,int b)
{
x=a;
y=b;
}
void print()
{
cout<<x<<" "<<y;
}
friend c1 operator -(c1 &ob1)
{
c1 temp;
temp.x=-ob1.x;
temp.y=-ob1.y;
return temp;
}
};
int main()
{
c1 p(3,4);
c1 p1;
p1=operator -(p);
p1.print();
}

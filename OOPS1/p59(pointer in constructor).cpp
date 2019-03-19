#include<iostream>
using namespace std;
class Rect
{
int l,b;
public:
Rect()
{
l=2;
b=3;
}
Rect(int x,int y)
{
l=x;
b=y;
}
void show()
{
cout<<l*b<<endl;
}
};
int main()
{
Rect r1;
Rect r(2,2);
Rect *p,*p1;
//Rect *p1=new Rect();
p=&r1;
p->show();
p1=&r;
p1->show();
return 0;
}

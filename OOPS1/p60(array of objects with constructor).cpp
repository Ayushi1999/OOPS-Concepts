#include<iostream>
using namespace std;
class Rect
{
int l,b;
public:
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
Rect r[2]={Rect(),Rect(2,3)};
Rect *p[2];
p[0]=&r[0];
p[1]=&r[1];
int i;
for(i=0;i<2;i++)
{
p[i]->print();
//p++;
}
return 0;
}

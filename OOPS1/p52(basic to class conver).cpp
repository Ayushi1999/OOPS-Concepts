#include<iostream>
using namespace std;
class rect
{
int l,b;
public:
rect()
{
l=0;
b=0;
}
rect(int x)
{
l=x+2;
b=x+3;
}
void area()
{
cout<<l*b;
}
};
int main()
{
rect R;
int a;
cin>>a;
R=a;
R.area();
return 0;
}

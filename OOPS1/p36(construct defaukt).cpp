#include<iostream>
using namespace std;
class c1
{
int x=0,y=0;
public:
c1()
{
x++;
//x=10;
//y=20;
cout<<x<<y;
}
};
int main()
{
c1 p;
return 0;
}

#include<iostream>
using namespace std;
class si
{
float pa,r,t;
public:
void input()
{
cin>>pa>>r>>t;
}
void calculate()
{
float si;
si=(float)((pa*r*t)/100);
cout<<si;
}
};
int main()
{
si p;
p.input();
p.calculate();
return 0;
}

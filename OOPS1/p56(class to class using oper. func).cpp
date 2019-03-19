#include<iostream>
using namespace std;
class Minute
{
int min;
public:
Minute()
{
}
Minute(int g)
{
min=g;
}
void print()
{
cout<<min;
}
};
class Time
{
int hr,min;
public:
Time(){}
Time(int x,int y)
{
hr=x;
min=y;
}
operator Minute()
{
return Minute((hr*60)+min);
}
};
int main()
{
Time T(1,2);
Minute M;
M=T;
M.print();
return 0;
}

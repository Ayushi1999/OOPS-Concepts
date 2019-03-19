#include<iostream>
using namespace std;
class Minute;
class Time
{
int hr,min;
public:
Time(int x,int y)
{
hr=x;
min=y;
}
int getMin()
{
return (hr*60)+min;
}
};
class Minute
{
int min;
public:
Minute()
{
}
Minute(Time t)
{
min=t.getMin();
}
void print()
{
cout<<min;
}
};
int main()
{
Time T(3,4);
Minute M;
M=T;
M.print();
return 0;
}

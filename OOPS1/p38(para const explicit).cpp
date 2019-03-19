#include<iostream>
using namespace std;
class c1
{
int x,y;
public:
c1(int a,int b)
{
x=a;
y=b;
}
void display()
{
cout<<x<<" "<<y;
}
};
int main()
{
c1 p=c1(3,4);
p.display();
return 0;
}

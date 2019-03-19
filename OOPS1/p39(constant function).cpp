#include<iostream>
using namespace std;
class c1
{
private:
int x;
 int y;
public:
c1(y=33):x(10)
{
    //x=10;
    //y=20;
}
void modify(int a)
{
//x=x+a;
//y=y+10;
}
void print()
{
cout<<x<<" "<<y+10;
}
};
int main()
{
 c1 ob1;
c1 ob2(80);
ob1.modify(5);
ob2.modify(8);
ob2.print();
return 0;
}


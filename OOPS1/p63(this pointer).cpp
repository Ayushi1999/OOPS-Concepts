#include<iostream>
using namespace std;
class rect
{
int l,b;
public:
rect(int l,int b)
{
this->l=l;
this->b=b;
}
void print()
{
cout<<l<<b;
}
};
int main()
{
rect r(3,4);
r.print();
return 0;
}

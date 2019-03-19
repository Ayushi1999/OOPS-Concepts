#include<iostream>
using namespace std;
class c1
{
private:
int n;
public:
void get_data()
{
cin>>n;
}
friend void increment(c1 o);
};
void increment(c1 o)
{
o.n=o.n+10;
cout<<o.n;
}
int main()
{
c1 p;
p.get_data();
increment(p);
//p.print();
return 0;
}

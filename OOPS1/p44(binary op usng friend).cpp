#include<iostream>
using namespace std;
class complex
{
int re,im;
public:
complex();
complex(int,int);
complex(complex&);
friend complex operator+(complex&,complex&);
void print();
};
complex::complex():re(0),im(0)
{
}
complex::complex(int d,int f)
{
re=d;
im=f;
}
complex::complex(complex &c1)
{
re=c1.re;
im=c1.im;
}
complex operator +(complex &ob,complex &ob1)
{
complex temp;
temp.re=ob.re+ob1.re;
temp.im=ob.im+ob1.im;
return temp;
}
void complex::print()
{
cout<<re<<"+"<<im<<"i";
}
int main()
{
complex c;
complex c1(5,6);
complex c2(c1);
c=operator +(c1,c2);
//c=c1+c2;
c.print();
return 0;
}

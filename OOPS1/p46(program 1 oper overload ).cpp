#include<iostream>
using namespace std;
class complex
{
int re,im;
public:
complex();
complex(int,int);
complex operator +(int);
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
complex complex::operator +(int a)
{
complex temp;
temp.re=re+a;
temp.im=im+a;
return temp;
}
void complex::print()
{
cout<<re<<"+"<<im<<"i";
}
int main()
{
complex c;
complex c1(4,5);
c=c1.operator +(2);
//c=c1+2;
c.print();
return 0;
}

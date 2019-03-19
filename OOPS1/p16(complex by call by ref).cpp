#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
void getdata()
{
cin>>a>>b;
}
/*complex check(complex c)
{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return temp;
}*/
friend complex check(complex&,complex&);
void print()
{
cout<<a<<"+"<<b<<"i";
}
};
complex check(complex &y,complex &z)
{
    complex j;
    j.a=y.a+z.a;
    j.b=y.b+z.b;
    return j;
}

int main()
{
complex p,p1,p2;
p.getdata();
p1.getdata();
p2=check(p,p1);
p2.print();
//p2=p.check(p1);
//p2.print();
return 0;
}

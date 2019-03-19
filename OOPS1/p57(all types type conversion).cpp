#include<iostream>
#include<math.h>
using namespace std;
class Cir;
class Rect
{
float l,b,a;
public:
Rect()
{
l=0;
b=0;
}
Rect(float x)
{
l=x;
b=x;
}
float area()
{
a=l*b;
return a;
}
};
class Cir
{
float r,a1;
public:
Cir()
{
}
Cir(Rect ob)
{
a1=ob.area();
}
operator float()
{
r=sqrt(a1/3.14);
return r;
}
};
int main()
{
Rect R(3);
float C;
cin>>C;
R=C;      //basic to class
R.area();
Cir t;
t=R;      //class to class
float radius;
radius=t;    //class to basic
cout<<radius;
return 0;
}

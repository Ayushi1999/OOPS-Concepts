#include<iostream.h>
#include<conio.h>
class c1
{
protected:
          int x,y,z;
public:
       void input()
       {
       cout<<"enter x&y";
       cin>>x>>y;
       }
       void sum()
       {
       z=x+y;
       cout<<z;
       }
};
class c2:public c1
{
public:
       void sub()
       {
       z=x-y;
       cout<<z;
       }
};
class c3:public c2
{
public:
       void divide()
       {
       z=x/y;
       cout<<z;
       }
};
int main()
{
c3 p;
p.input();
p.sum();
p.sub();
p.divide();
getch();
}

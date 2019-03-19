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
       cout<<"sum="<<z;
       }
};
class c2
{
protected:
          int a,b,c;
public:
       void get()
       {
       cout<<"enter a&b";
       cin>>a>>b;
       }
       void sub()
       {
       c=a-b;
       cout<<"sub="<<c;
       }
};
class c3:public c1,public c2
{
public:
       void divide()
       {
       c=a/b;
       cout<<"division="<<c;
       }
};
int main()
{
c3 p;
p.input();
p.sum();
p.get();
p.sub();
p.divide();
getch();
}
       

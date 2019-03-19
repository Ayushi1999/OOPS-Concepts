#include<iostream.h>
#include<conio.h>
class c1
{
private:
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
class c2:public c1
{
private:
        int a,b,c;
public:
       void input()
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
int main()
{
c2 p;
p.input();
p.c1::input();
p.sum();
p.sub();
getch();
}

#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int n,i;
public:
       c1()
       {
       n=0;
       }
       c1(int a)
       {
       n=a;
       }
       void input()
       {
       cout<<"enter n";
       cin>>n;
       }
       void primenumber()
       {
       int i;
       for(i=1;i<=500;i++)
       {
       if(n%i==0)
       {
       break;
       }
       else
       {
       cout<<i;
       }
       }
       }
};
int main()
{
c1 p;
c1 k(1);
p.input();
p.primenumber();
getch();
}

#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int y,i,n,sum,k;
public:
       c1()
       {
       sum=0;
       n=0;
       }
       c1(c1 &p)
       {
       n=p.n;
       }
       void input()
       {
       cout<<"enter n";
       cin>>n;
       }
       void armstrong()
       {
       k=n;
       while(n>0)
       {
       y=n%10;
       sum=sum+y*y*y;
       n=n/10;
       }
       if(sum==k)
       {
       cout<<"armstrong";
       }
       else
       {
       cout<<"not";
       }
       }
};
int main()
{
c1 p;
c1 k(p);
p.input();
p.armstrong();
getch();
}
       

#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int y,k,n,i,sum;
public:
       c1()
       {
       sum=0;
       }
       ~c1()
       {
       cout<<"dest";
       }
       void input()
       {
       cout<<"enter n";
       cin>>n;
       }
       void palindrom()
       {
       k=n;
       while(n>0)
       {
       y=n%10;
       sum=sum*10+y;
       n=n/10;
       }
       if(sum==k)
       {
       cout<<"palindrom";
       }
       else
       {
       cout<<"not";
       }
       }
};
int main()
{
c1 *p;
p=new c1();
p->input();
p->palindrom();
getch();
}
       

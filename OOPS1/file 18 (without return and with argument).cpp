#include<iostream.h>
#include<conio.h>
void sum(int);
int main()
{
int n;
cout<<"enter n";
cin>>n;
sum(n);
getch();
}
void sum(int a)
{
int i,sum=0;
for(i=1;i<=a;i++)
{
sum=sum+i;
}
cout<<"sum="<<sum;
}

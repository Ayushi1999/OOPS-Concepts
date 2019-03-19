#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,k,l;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
for(k=1;k<=5;k++)
{
cout<<k;
}
for(l=4;l>=i;l--)
{
cout<<l;
}
cout<<endl;
}
getch();
}

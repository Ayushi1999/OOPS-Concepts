#include<iostream.h>
#include<conio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
cout<<" ";
}
j--;
for(k=1;k<=i;k++)
{
cout<<k++;
k--;
}
cout<<endl;
}
getch();
}

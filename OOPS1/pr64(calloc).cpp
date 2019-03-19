#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
int *p=(int*)calloc(4,10);
int i;
for(i=0;i<3;i++)
{
*(p+i)=2*i;
}
for(i=0;i<3;i++)
{
printf("%d",*(p+i));
}
getch();
}

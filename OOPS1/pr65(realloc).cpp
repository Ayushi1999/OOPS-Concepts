#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{
int *p=(int*)calloc(4,10);
int i;
for(i=0;i<10;i++)
{
*(p+i)=5*i;
}
p=(int*)realloc((int*)p,sizeof(int)*5);
for(i=10;i<15;i++)
{
*(p+i)=5*i;
}
for(i=0;i<15;i++)
{
printf("%d ",*(p+i));
}
getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct complex
{
int r;
int i;
};
int main()
{
struct complex c1,c2,sum,diff;
printf("enter c1.r,c1.i");
scanf("%d%d",&c1.r,&c1.i);
printf("enter c2.r,c2.i");
scanf("%d%d",&c2.r,&c2.i);
sum.r=c1.r+c2.r;
sum.i=c1.i+c2.i;
diff.r=c1.r-c2.r;
diff.i=c1.r-c2.i;
printf("sum=%d+%di\n",sum.r,sum.i);
printf("diff=%d-%di",diff.r,diff.i);
getch();
}

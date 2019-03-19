#include<stdio.h>
#include<conio.h>
#include<string.h>
void sort(int roll[10],char str[10][10],int n)
{
int i,j,temp;
char temp1[20];
for(i=n-1;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        if(roll[j-1]>roll[j])
        {
        temp=roll[j-1];
        roll[j-1]=roll[j];
        roll[j]=temp;
        strcpy(temp1,str[j-1]);
        strcpy(str[j-1],str[j]);
        strcpy(str[j],temp1);
        }
    }
}
}
void output(int roll[10],char str[10][10],int n)
{
int i;
    for(i=0;i<n;i++)
    {
    printf("%d %s",roll[i],str[i]);
    }
}
int main()
{
int n,roll[10],i;
char str[10][10];
scanf("%d",&n);
    if(n<=1&&n>=100)
    {
    printf("CAN'T SORT");
    }
    else
    {
        for(i=0;i<n;i++)
        {
        scanf("%d%s",&roll[i],&str[i]);
        }
    }
sort(roll,str,n);
output(roll,str,n);
getch();
}

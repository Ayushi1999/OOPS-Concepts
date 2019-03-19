#include<stdio.h>
#include<conio.h>
int swap(int,int);
int main()
{
    int x=10,y=20;
    swap(x,y);
    printf("x=%d y=%d",x,y);
    getch();
}
int swap(int x, int y)
{
int z;
    z=x;
    x=y;
    y=z;
}
    

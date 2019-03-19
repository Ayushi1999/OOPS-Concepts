#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[50];
};
void input(struct student *p1)
{
scanf("%d %s",&p1->rollno,p1->name);
}
void output(struct student p2)
{
printf("rollno=%d\n%s",p2.rollno,p2.name);
}
int main()
{
struct student s1;
input(&s1);
output(s1);
getch();
}

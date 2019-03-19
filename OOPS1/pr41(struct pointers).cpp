#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[50];
char stream[50];
};
int main()
{
struct student s1={1,"abc","cse"};
struct student *p1;
p1=&s1;
printf("%d",p1->rollno);
printf("%s",p1->name);
printf("%s",p1->stream);
getch();
}

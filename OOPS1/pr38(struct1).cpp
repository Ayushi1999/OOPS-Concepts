#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
char *section;
int group;
float fee;
};
int main()
{
struct student s1;
scanf("%d",&s1.rollno);
scanf("%s",s1.name);
scanf("%s",s1.section);
scanf("%d",&s1.group);
scanf("%d",&s1.fee);
printf("rollno=%d",s1.rollno);
printf("name=%s",s1.name);
printf("section=%s",s1.section);
printf("group=%d",s1.group);
printf("fee=%f",s1.fee);
getch();
}

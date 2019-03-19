#include<stdio.h>
#include<conio.h>
#include<string.h>
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
s1.rollno=10;
strcpy(s1.name,"abc");
s1.section="cse";
s1.group=1;
s1.fee=1000.00;
printf("rollno=%d",s1.rollno);
printf("name=%s",s1.name);
printf("section=%s",s1.section);
printf("group=%d",s1.group);
printf("fee=%f",s1.fee);
getch();
}

#include<stdio.h>
#include<conio.h>
#pragma pack(5)
struct fullname
{
int x;
char firstname[10];
//int x;
char lastname[11
];
};
int main()
{
printf("%d",sizeof(struct fullname));
getch();
}

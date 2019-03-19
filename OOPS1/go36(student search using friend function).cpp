#include<iostream.h>
#include<conio.h>
#include<string.h>
class c1
{
private:        
        char name[30];
public:
friend class search;
void input()
{
cout<<"enter any value";
cin>>name;
}
};
class search
{
public:
c1 k[5];
void search1()
{
int i;
char r[40];
cout<<"Enter name you want to search";
cin>>r;
int flag=0;
for(i=0;i<5;i++)
{
k[i].input();
if(strcmp(k[i].name,r)==0)
{
flag=1;
}
}
if(flag==1)
{
cout<<"Present";
}
else
{
cout<<"Not Prsnt";
}
}
};
int main()
{
search l;
l.search1();
getch();
}


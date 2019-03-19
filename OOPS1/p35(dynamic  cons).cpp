#include<iostream>
#include<string.h>
using namespace std;
class string1
{
char *name;
int len;
public:
string1()
{
len=0;
name=new char[len+1];
}
string1(char *n)
{
len=strlen(n);
name=new char[len+1];
strcpy(name,n);
}
void print()
{
cout<<name;
}
void concat(string1 a,string1 b)
{
len=a.len+b.len;
name=new char[len+1];
strcpy(name,a.name);
strcat(name,b.name);
}
};
int main()
{
char s[100]="hello";
string1 str(s);
char p[100]="world";
string1 str1(p);
string1 str2;
str2.concat(str,str1);
str2.print();
return 0;
}

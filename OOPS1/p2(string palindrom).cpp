#include<iostream>
using namespace std;
int palin(char str[])
{
int i,k=0,count=0,flag=0;
char str2[20];
for(i=0;str[i]!='\0';i++)
{
    count++;
}
cout<<count;
k=0;
for(i=count-1;i>=0;i--)
{
str2[k]=str[i];
k++;
}
str2[k]='\0';
for(i=0;str[i]!='\0';i++)
{
   if(str[i]==str2[i])
   {
       flag=1;
   }
   else
   {
       flag=0;
       break;
   }
}
if(flag==1)
cout<<"palindrom";
else
cout<<"not";
return 0;
}
int main()
{
char str[20];
//int i,k,count=0,flag=0;
cin>>str;
palin(str);
return 0;
}

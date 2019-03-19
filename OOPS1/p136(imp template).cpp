#include<iostream>
using namespace std;
//type your code
template<typename T>
T sort(T p[],int m)
{
    int i,j;
    T temp;
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<p[i]<<" ";
    }
}
template<typename T>
T search(T p1[],int m1,T s1)
{
    int i,j,pos,flag=0;
    for(i=0;i<m1;i++)
    {
        if(p1[i]==s1)
        {
            pos=i;
            flag=1;
        }
    }
    if(flag==1)
    {
    cout<<pos;
    }
    else
    {
        cout<<"Element not found";
    }
}
int main()
{
int a[10],n,i,choice1,choice2,num1;
string str[100];
string s;
cin>>n;
cin.ignore();
for(i=0;i<n;i++)
{
cin>>str[i];
cin.ignore();
}
for(i=0;i<n;i++)
{
cin>>a[i];
}
cin>>choice1;
if(choice1==1)
{
cin>>choice2;
if(choice2==1)
sort(str,n);
else if(choice2==2)
sort(a,n);
else
cout<<"enter valid choice"<<endl;
}
else if(choice1==2)
{
cin>>choice2;
if(choice2==1)
{
cin>>s;
search(str,n,s);
}
else if(choice2==2)
{
cin>>num1;
search(a,n,num1);
}
}
else
cout<<"enter valid choice"<<endl;
return 0;
}

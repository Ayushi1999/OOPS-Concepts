#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student
{
protected:
int rollno;
string name;
public:
student()
{
}
student(int r,string name1)
{
rollno=r;
name=name1;
}
/*void print()
{
cout<<rollno<<endl<<name;
}*/
};
class test:virtual public student
{
protected:
int s1,s2;
public:
test()
{
}
test(int a,int b,int r,string name1):student(r,name1)
{
s1=a;
s2=b;
}
/*void printtest()
{
cout<<s1<<endl<<s2;
}*/
};
class sports:virtual public student
{
protected:
int s3,s4;
public:
sports()
{
}
sports(int c,int d,int r,string name1):student(r,name1)
{
s3=c;
s4=d;
}
/*void print1()
{
cout<<s3<<s4;
}*/
};
class total:public test,public sports
{
int tot=0;
public:
total()
{
}
total(int a,int b,int c,int d,int r,string name1):sports(c,d,r,name1),test(a,b,r,name1),student(r,name1) //a virtual is created between student class and total class
{
}
void printdata()
{
tot=s1+s2+s3+s4;
  //  cout<<"Name"<<setw(10)<<"Rollno"<<setw(10)<<"Marks"<<endl;
}
void sort(total ob[100],int a1)
{
    int i,j;
    total temp;
    for(i=0;i<a1-1;i++)
    {
        for(j=0;j<a1-i-1;j++)
        {
            if(ob[j].name>ob[j+1].name)
            {
            temp=ob[j];
            ob[j]=ob[j+1];
            ob[j+1]=temp;
            }
        }
    }
    cout<<left<<setw(25)<<"Name"<<left<<setw(25)<<"Rollno"<<left<<setw(25)<<"Total";
    for(i=0;i<a1;i++)
    {
        cout<<left<<setw(25)<<ob[i].name<<left<<setw(25)<<ob[i].rollno<<left<<setw(25)<<ob[i].tot;
    }
}
void del(total ob[100],int a1)
{
int i;
cout<<"enter the name of student to be deleted";
cin>>name;
int pos;
for(i=0;i<a1;i++)
{
    if(ob[i].name==name)
    {
    pos=i;
    while(pos<a1)
    {
    ob[pos]=ob[pos+1];
    pos++;
    }
    }
    a1=a1-1;
}
cout<<left<<setw(25)<<"Total"<<left<<setw(25)<<"Rollno"<<left<<setw(25)<<"Name";
    for(i=0;i<a1;i++)
    {
        cout<<left<<setw(25)<<ob[i].tot<<left<<setw(25)<<ob[i].rollno<<left<<setw(25)<<ob[i].name;
    }
}
};
int main()
{
int i,n,option,m,o,p,q,s;
string name2;
cout<<"enter the no. of students";
cin>>n;
cout<<"enter the option";
cin>>option;
total ob[n];
cout<<"enter the data of student";
total ob1;

for(i=0;i<n;i++)
{
cin>>m>>o>>p>>q>>s>>name2;
ob[i]=total(m,o,p,q,s,name2);
//ob[i].printdata();
}
  switch(option)
    {
    case 1:
     ob1.sort(ob,n);
     break;
    case 2:
        ob1.del(ob,n);
        break;
    }
return 0;
}

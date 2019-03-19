#include<iostream>
using namespace std;
class student
{
int rollno;
char name[30];
public:
void getdata()
{
cin>>rollno;
cin>>name;
}
void print()
{
cout<<rollno<<endl<<name;
}
};
class test:public virtual student
{
protected:
int s1,s2;
public:
void gettest()
{
cout<<"enter marks of student";
cin>>s1>>s2;
}
void printtest()
{
cout<<s1<<endl<<s2;
}
};
class sports:public virtual student
{
protected:
int s3,s4;
public:
void getsports()
{
getdata();
cout<<"enter sports marks";
cin>>s3>>s4;
}
void print1()
{
cout<<s3<<s4;
}
};
class total:public test,public sports
{
int tot;
public:
void show()
{
tot=s1+s2+s3+s4;
cout<<tot;
}
};
int main()
{
total ob;
ob.student::getdata();
ob.student::print();
ob.test::gettest();
ob.test::printtest();
ob.sports::getsports();
ob.sports::print1();
ob.show();
return 0;
}

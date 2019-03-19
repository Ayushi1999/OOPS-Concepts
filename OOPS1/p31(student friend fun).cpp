#include<iostream>
using namespace std;
class sports;
class academic;
class student
{
private:
int rollno;
public:
void get_data()
{
cin>>rollno;
}
void print(academic &a);
};
class sports
{
int m;
public:
void get_data()
{
cin>>m;
}
void print(academic &a);
};
class academic
{
int m1,m2,m3;
public:
void get_data()
{
cin>>m1>>m2>>m3;
}
friend void student::print(academic &a);
friend void sports::print(academic &a);
};
void student::print(academic &a)
{
cout<<rollno<<" "<<a.m1<<" "<<a.m2<<" "<<a.m3;
}
void sports::print(academic &a)
{
cout<<m<<" "<<a.m1<<" "<<a.m2<<" "<<a.m3;
}
int main()
{
student s1;
sports s2;
academic s3;
s1.get_data();
s2.get_data();
s3.get_data();
s1.print(s3);
s2.print(s3);
return 0;
}

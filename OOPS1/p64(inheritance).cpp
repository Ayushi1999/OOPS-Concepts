#include<iostream>
using namespace std;
class student
{
int roll;
char name[20];
public:
void get()
{
cin>>roll>>name;
}
protected:
int c;
};
class btech:private student
{
float fee;
public:
void calculate()
{
get();
}
};
int main()
{
btech ob;
ob.get();
return 0;
}

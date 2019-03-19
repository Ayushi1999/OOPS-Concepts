#include<iostream>
using namespace std;
#include<fstream>
int main()
{
ifstream ifile;
ofstream ofile("c.txt");
string str;
ifile.open("ff.txt");
if(!ifile)
{
cout<<"error";
}
while(!ifile.eof())
{
getline(ifile,str);
cout<<str;
}
return 0;
}

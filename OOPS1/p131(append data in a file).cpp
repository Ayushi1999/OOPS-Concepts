#include<iostream>
using namespace std;
#include<fstream>
int main()
{
string str;
ifstream ifile("f.txt");
ofstream ofile("ff.txt",ios::app|ios::in);
if(!ifile)
{
cout<<"Error";
}
while(!ifile.eof())
{
getline(ifile,str);
ofile<<str;
}
return 0;
}

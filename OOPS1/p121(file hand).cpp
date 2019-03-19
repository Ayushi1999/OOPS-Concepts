#include<iostream>
using namespace std;
#include<fstream>
int main()
{
ifstream ifile;
ofstream ofile;
string str;
ifile.open("f.txt");
ofile.open("ff.txt");
if(!ifile)
{
cout<<"Error";
}
while(!ifile.eof())
{
getline(ifile,str);
ofile<<str;
}
cout<<"File Created"<<endl;
ifile.close();
return 0;
}

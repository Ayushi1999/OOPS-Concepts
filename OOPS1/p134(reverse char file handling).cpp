#include<iostream>
#include<string>
using namespace std;
#include<fstream>
int main()
{
int i,j;
string str;
ifstream ifile;
ifile.open("f.txt");
ofstream ofile("p.txt");
if(!ifile)
{
cout<<"Error";
}
int count=0;
while(!ifile.eof())
{
    cout.put(ifile);
    count++;
}
for(i=0,j=count-1;i<count;i++,j--)
{

}
return 0;
}

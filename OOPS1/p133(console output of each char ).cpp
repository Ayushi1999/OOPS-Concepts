#include<iostream>
using namespace std;
#include<fstream>
int main()
{
char c;
ifstream ifile("ff.txt");
if(!ifile)
{
cout<<"Error";
}
while(!ifile.eof())
{
cin.get(c);
cout.put(c);
}
return 0;
}

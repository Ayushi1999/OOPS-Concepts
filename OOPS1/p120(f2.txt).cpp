#include<iostream>
using namespace std;
#include<fstream>
int main()
{
ifstream ifile;
ifile.open("f.txt");
ofstream ofile("f.txt");
ofile<<"Computer"<<endl;
ofile<<"Science"<<endl;
ofile<<"CSE-4D1"<<endl;
ofile.close();
}

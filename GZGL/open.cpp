#include<iostream>
#include<set>
#include<fstream>
#include<queue>
#include<string>
#include"employee.h"
#include"node.h"
using namespace std; 

void read()
{
	ifstream OpenFile("employee.txt");
	char ch[200];
    while(!OpenFile.eof())
    {
       OpenFile.getline(ch,200);
       cout<<ch<<endl;
    }
	OpenFile.close();
	cout<<endl;
}



#include<iostream>
#include<set>
#include<string>
#include<queue>
#include"employee.h"
#include"node.h" 
using namespace std;

extern queue<int>manager;
extern queue<int>sales;
extern queue<int>sales_manager;
extern queue<int>Technical;
extern set<int>ag;

void sta()
{
	cout<<"人员总数："; 
	cout<<ag.size()<<endl;
	cout<<"经理人数：";
	cout<<manager.size()<<endl;
	cout<<"技术人员人数：";
	cout<<Technical.size() <<endl;
	cout<<"销售经理人数：";
	cout<<sales_manager.size() <<endl;
	cout<<"销售人员人数：";
	cout<<sales.size() <<endl;
	 
}

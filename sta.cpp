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
	cout<<"��Ա������"; 
	cout<<ag.size()<<endl;
	cout<<"����������";
	cout<<manager.size()<<endl;
	cout<<"������Ա������";
	cout<<Technical.size() <<endl;
	cout<<"���۾���������";
	cout<<sales_manager.size() <<endl;
	cout<<"������Ա������";
	cout<<sales.size() <<endl;
	 
}

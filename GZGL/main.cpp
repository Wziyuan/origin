#include<iostream>
#include<stdio.h>
#include<fstream>
#include<set>
#include<queue>
#include<string>
#include"employee.h"
#include"node.h"
using namespace std; 

queue<int>manager;    
queue<int>sales;
queue<int>sales_manager;
queue<int>Technical;
set<int>ag;
 
void create(point &Head);   
void print(point Head);
void insert(point Head);
void delet(point Head);
void inquire(point Head);
void modify1(point Head);
void modify2(point Head);
void modify3(point Head);
void modify4(point Head);
void sta();
void save(point Head);
void read(); 

void out()
{
	cout<<"          ============================欢迎进入****公司工资管理系统=========================     "<<endl;
	cout<<"      =============================================================================================="<<endl;
	cout<<"                     =============================================================       "<<endl;
    cout<<"                     ||0-显示,1-添加,2-删除，3-查询，4-统计 5-保存 6-读取 7-退出||   "<<endl;
   	cout<<"                     =============================================================      "<<endl;
}

void ban()
{
	getchar();
	getchar();
} 

int main()
{
	point T;
	create(T);
	
	int op;
	cout<<endl;
	
	while(1)
	{
		out(); 
		cin>>op;
		switch(op)
		{
			case 0: print(T);ban();break;
			case 1: insert(T);ban();break; 
			case 2: delet(T);ban();break;
			case 3: inquire(T);ban();break;
			case 4: sta();ban();break;
			case 5: save(T);ban();break;
			case 6: read();ban();break;
			case 7: exit(0);
		}
		system("cls");
	}
	return 0;
}

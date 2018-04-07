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

void delet(point Head)
{
	if(ag.size() ==0) 
	{
		cout<<"记录为空"<<endl;
		return ; 
	} 
    cout<<"请输入要删除人员的编号或姓名："<<endl;
    string rt;
    cin>>rt;
    int num1=0;
    if(rt[0]>='0'&&rt[0]<='9')
    {
    	int len=rt.length();
    	int len1=len;
    	while(len--)
    	{
    		num1=num1*10+rt[len1-len-1]-48;
		}
    	point now=Head;
        int flg=0;
        while(now->next!=NULL)
       {
            if(now->next->num==num1)
            {
                flg=1;
                ag.erase(num1);
                switch(now->next->num_sign)
                {
                	case 1: manager.pop();break;
                	case 2: sales_manager.pop() ;break;
                	case 3: Technical.pop() ;break;
                	case 4: sales.pop() ;break;
				}
                now->next=now->next->next;
                cout<<"删除成功"<<endl;
				return ;
            }
            now=now->next;
            
        }
        if(!flg)
        {
            cout<<"记录不存在"<<endl;
            return;
        }
	}
	else
	{
		point now=Head;
        int flg=0;
        while(now->next!=NULL)
       {
            if(now->next->num_sign==1&&now->next->p1->name==rt||now->next->num_sign==2&&now->next->p2->name==rt||now->next->num_sign==3&&now->next->p3->name==rt||now->next->num_sign==4&&now->next->p4->name==rt)
            {
                flg=1;
                ag.erase(now->next->num);
                switch(now->next->num_sign)
                {
                	case 1: manager.pop();break;
                	case 2: sales_manager.pop() ;break;
                	case 3: Technical.pop() ;break;
                	case 4: sales.pop() ;break;
				}
                now->next=now->next->next;
                cout<<"删除成功"<<endl;
				return;
            }
            now=now->next;
            
        }
        if(!flg)
        {
            cout<<"记录不存在"<<endl;
            return ;
        }
	} 
}

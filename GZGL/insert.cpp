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

void insert(point Head)
{
    point now=Head;

    while(now->next!=NULL)
    {
        now=now->next;
    }
    point new_one=new node;
    
    cout<<"��ѡ��������1.���� 2.���۾��� 3.������Ա 4.������Ա "<<endl; 
    cin>>new_one->num_sign ;
    cout<<"��ţ�"; 
    cin>>new_one->num;
    int len=ag.size();
    ag.insert(new_one->num);
    if(len==ag.size()) 
	{
		cout<<"����ظ�������"<<endl;
		return;
	} 
	else 
    {
        new_one->next=NULL;
        now->next=new_one;
        switch(new_one->num_sign)
        {
        	case 1: new_one->p1=new Manager;new_one->p1->get_salary() ;manager.push(1);break;
        	case 2: new_one->p2=new Sales_manager;new_one->p2->get_salary() ;sales_manager.push(1) ;break;
        	case 3: new_one->p3=new technical;new_one->p3->get_salary() ;Technical.push(1) ;break;
        	case 4: new_one->p4=new Salesman;new_one->p4->get_salary() ;sales.push(1) ;break;
		}
		cout<<"====��ӳɹ�===="<<endl; 
	}
    return;
}

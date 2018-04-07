#include<iostream>
#include<set>
#include<iomanip>
#include<string>
#include"employee.h"
#include"node.h"
using namespace std;

extern set<int>ag;

void print(point Head)
{
    cout<<"公司人员及工资情况:";
    cout<<endl;
    if(ag.size()==0) 
    {
    	cout<<"尚无人员记录"<<endl;
		return ; 
	}
    cout<<"编号       姓名      性别      部门      级别       工资     ";
    cout<<endl;
    while(Head->next!=NULL)
    {
        Head=Head->next;
        switch(Head->num_sign )
		{
			case 1: cout<<left;cout<<setw(11)<<Head->num;Head->p1->display();Head->p1->salary() ;break;
			case 2: cout<<left;cout<<setw(11)<<Head->num;Head->p2->display();Head->p2->salary() ;break;
			case 3: cout<<left;cout<<setw(11)<<Head->num;Head->p3->display();Head->p3->salary() ;break;
			case 4: cout<<left;cout<<setw(11)<<Head->num;Head->p4->display();Head->p4->salary() ;break;
		} 
		cout<<endl;
    }
    
}

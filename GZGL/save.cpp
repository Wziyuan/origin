#include<iostream>
#include<set>
#include<fstream>
#include<queue>
#include<string>
#include"employee.h"
#include"node.h"
using namespace std; 

void save(point Head)
{
	ofstream Save("employee.txt",ios::out|ios::ate);
	while(Head->next!=NULL)
	{
		Head=Head->next;
		switch(Head->num_sign)
		{
			case 1: Save<<"编号："<<Head->num<<' ';
		            Save<<"姓名："<<Head->p1->name<<' ';
	            	Save<<"性别："<<Head->p1->sex <<' ';
	            	Save<<"部门："<<Head->p1->department<<' ' ;
	            	Save<<"级别："<<Head->p1->rank<<' ';
	            	Save<<"工资："<<Head->p1->salary_Manager<<'\n';
	            	break;
	            	
			case 2: Save<<"编号："<<Head->num<<' ';
		            Save<<"姓名："<<Head->p2->name<<' ';
	            	Save<<"性别："<<Head->p2->sex <<' ';
	            	Save<<"部门："<<Head->p2->department<<' ' ;
	            	Save<<"级别："<<Head->p2->rank<<' ';
	            	Save<<"固定工资："<<Head->p2->salary_Manager<<' ';
	            	Save<<"销售额："<<Head->p2->Sales_sales<<' ' ;
	            	Save<<"提成："<<Head->p2->Sales_commission<<'\n';
	            	break;
	        
			case 3:Save<<"编号："<<Head->num<<' ';
		            Save<<"姓名："<<Head->p3->name<<' ';
	            	Save<<"性别："<<Head->p3->sex <<' ';
	            	Save<<"部门："<<Head->p3->department<<' ' ;
	            	Save<<"级别："<<Head->p3->rank<<' ';
	            	Save<<"每小时工资："<<Head->p3->salary_hour <<' '; 
	            	Save<<"工作时长："<<Head->p3->Business_hours<<' ' ;
					Save<<"工资："<<Head->p3->salary_technical<<'\n';
					break;
					
			case 4:Save<<"编号："<<Head->num<<' ';
		            Save<<"姓名："<<Head->p4->name<<' ';
	            	Save<<"性别："<<Head->p4->sex<<' ' ;
	            	Save<<"部门："<<Head->p4->department<<' ' ;
	            	Save<<"级别："<<Head->p4->rank<<' ';
	            	Save<<"销售额："<<Head->p4->Sales_sales<<' ';
					Save<<"提成："<<Head->p4->Sales_commission<<'\n'; 
					break;
		}
	}
	cout<<" ==保存成功== "<<endl; 
	Save.close();
}

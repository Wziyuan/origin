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
			case 1: Save<<"��ţ�"<<Head->num<<' ';
		            Save<<"������"<<Head->p1->name<<' ';
	            	Save<<"�Ա�"<<Head->p1->sex <<' ';
	            	Save<<"���ţ�"<<Head->p1->department<<' ' ;
	            	Save<<"����"<<Head->p1->rank<<' ';
	            	Save<<"���ʣ�"<<Head->p1->salary_Manager<<'\n';
	            	break;
	            	
			case 2: Save<<"��ţ�"<<Head->num<<' ';
		            Save<<"������"<<Head->p2->name<<' ';
	            	Save<<"�Ա�"<<Head->p2->sex <<' ';
	            	Save<<"���ţ�"<<Head->p2->department<<' ' ;
	            	Save<<"����"<<Head->p2->rank<<' ';
	            	Save<<"�̶����ʣ�"<<Head->p2->salary_Manager<<' ';
	            	Save<<"���۶"<<Head->p2->Sales_sales<<' ' ;
	            	Save<<"��ɣ�"<<Head->p2->Sales_commission<<'\n';
	            	break;
	        
			case 3:Save<<"��ţ�"<<Head->num<<' ';
		            Save<<"������"<<Head->p3->name<<' ';
	            	Save<<"�Ա�"<<Head->p3->sex <<' ';
	            	Save<<"���ţ�"<<Head->p3->department<<' ' ;
	            	Save<<"����"<<Head->p3->rank<<' ';
	            	Save<<"ÿСʱ���ʣ�"<<Head->p3->salary_hour <<' '; 
	            	Save<<"����ʱ����"<<Head->p3->Business_hours<<' ' ;
					Save<<"���ʣ�"<<Head->p3->salary_technical<<'\n';
					break;
					
			case 4:Save<<"��ţ�"<<Head->num<<' ';
		            Save<<"������"<<Head->p4->name<<' ';
	            	Save<<"�Ա�"<<Head->p4->sex<<' ' ;
	            	Save<<"���ţ�"<<Head->p4->department<<' ' ;
	            	Save<<"����"<<Head->p4->rank<<' ';
	            	Save<<"���۶"<<Head->p4->Sales_sales<<' ';
					Save<<"��ɣ�"<<Head->p4->Sales_commission<<'\n'; 
					break;
		}
	}
	cout<<" ==����ɹ�== "<<endl; 
	Save.close();
}

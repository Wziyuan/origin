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
    cout<<"��˾��Ա���������:";
    cout<<endl;
    if(ag.size()==0) 
    {
    	cout<<"������Ա��¼"<<endl;
		return ; 
	}
    cout<<"���       ����      �Ա�      ����      ����       ����     ";
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

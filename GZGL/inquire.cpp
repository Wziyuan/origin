#include<iostream>
#include<set>
#include<iomanip>
#include<string>
#include"employee.h"
#include"node.h"
using namespace std;

extern set<int>ag;

void inquire(point Head)
{
	void modify1(point Head);
	void modify2(point Head);
	void modify3(point Head);
	void modify4(point Head);
    cout<<"请输入要查询的信息(编号或姓名)："<<endl;
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
                cout<<"编号       姓名      性别      部门      级别       工资     "<<endl;
                cout<<left;cout<<setw(11)<<now->next->num;
                switch(now->next->num_sign)
                {
                	case 1: now->next->p1->display() ;now->next->p1->salary();modify1(now->next);break;
                	case 2: now->next->p2->display() ;now->next->p2->salary() ;modify2(now->next);break;
                	case 3: now->next->p3->display() ;now->next->p3->salary() ;modify3(now->next);break;
                	case 4: now->next->p4->display() ;now->next->p4->salary() ;modify4(now->next);break;
				}
				cout<<endl;
				return ;
            }
            now=now->next ;
        }
        if(!flg)
        {
            cout<<"要查询的人员不存在"<<endl;
            cout<<endl;
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
                cout<<"编号       姓名      性别      部门      级别       工资     "<<endl;
                cout<<left;cout<<setw(11)<<now->next->num;
				switch(now->next->num_sign)
				{
					case 1: now->next->p1->display() ;now->next->p1->salary();modify1(now->next);break;
                	case 2: now->next->p2->display() ;now->next->p2->salary() ;modify2(now->next);break;
                	case 3: now->next->p3->display() ;now->next->p3->salary();modify3(now->next);break;
                	case 4: now->next->p4->display() ;now->next->p4->salary();modify4(now->next);break;
				} 
				cout<<endl;
				return;
            }
            now=now->next ;
        }
        
        if(!flg)
        {
            cout<<"要查询的人员不存在"<<endl;
            cout<<endl;
            return ;
        }
	} 
}


void modify1(point Head)
{	
    cout<<endl;
    static int flag_1=0; 
    cout<<"============================"<<endl;
    if(flag_1==0)
	cout<<"======*是否修改信息？*======"<<endl;
	else 
	cout<<"====*是否继续修改信息？*===="<<endl;
	cout<<"======* 1.是   2.否  *======"<<endl;
	cout<<"============================"<<endl;
	int pan;
	cin>>pan;
	if(pan==1)
	{
		cout<<"请选择修改内容：1.编号 2.姓名 3.性别 4.部门 5.级别 6.工资  "<<endl;
		int pan2,a2;
		string a3;
		cin>>pan2;
		if(pan2==1)
		{
			cin>>a2;
			int len=ag.size() ;
			ag.insert(a2); 
			int len1=ag.size() ;
			while(len1==len) 
			{
				cout<<"重复！！"<<endl;
				cout<<"请重新输入："<<endl;
				int a3;
				cin>>a3;
				a2=a3;
				ag.insert(a3);
				len1=ag.size() ;  
			};
			ag.erase(Head->num); 
		}
		else if(pan2!=6) 
		{
			cin>>a3;
		}
		switch(pan2)
		{
			case 1: Head->num=a2;cout<<"修改完成"<<endl;flag_1=1;modify1(Head);break;
			case 2:  Head->p1->name=a3;cout<<"修改完成"<<endl;flag_1=1;modify1(Head);break;
			case 3:  Head->p1->sex=a3;cout<<"修改完成"<<endl;flag_1=1;modify1(Head);break;
			case 4:  Head->p1->department=a3;cout<<"修改完成"<<endl;flag_1=1;modify1(Head);break;
			case 5:  Head->p1->rank=a3;cout<<"修改完成"<<endl;flag_1=1;modify1(Head);break;
			case 6:  Head->p1->mod() ;cout<<"修改完成"<<endl;flag_1=1;modify1(Head);break; 
		} 
    }
    else return ;	
}


void modify2(point Head)
{	
    cout<<endl;
    static int flag_2=0; 
    cout<<"============================"<<endl;
    if(flag_2==0)
	cout<<"======*是否修改信息？*======"<<endl;
	else 
	cout<<"====*是否继续修改信息？*===="<<endl;
	cout<<"======* 1.是   2.否  *======"<<endl;
	cout<<"============================"<<endl;
	int pan;
	cin>>pan;
	if(pan==1)
	{
		cout<<"请选择修改内容：1.编号 2.姓名 3.性别 4.部门 5.级别 6.工资  "<<endl;
		int pan2,a2;
		string a3;
		cin>>pan2;
		if(pan2==1)
		{
			cin>>a2;
			int len=ag.size() ;
			ag.insert(a2); 
			int len1=ag.size() ;
			while(len1==len) 
			{
				cout<<"重复！！"<<endl;
				cout<<"请重新输入："<<endl;
				int a3;
				cin>>a3;
				a2=a3;
				ag.insert(a3);
				len1=ag.size() ;  
			};
			ag.erase(Head->num);  
		}
		else if(pan2!=6) cin>>a3;
		switch(pan2)
		{
			case 1: Head->num=a2;cout<<"修改完成"<<endl;flag_2=1;modify2(Head);break;
			case 2: Head->p2->name=a3;cout<<"修改完成"<<endl;flag_2=1;modify2(Head);break;
			case 3: Head->p2->sex=a3;cout<<"修改完成"<<endl;flag_2=1;modify2(Head);break;
			case 4: Head->p2->department=a3;cout<<"修改完成"<<endl;flag_2=1;modify2(Head);break;
			case 5: Head->p2->rank=a3;cout<<"修改完成"<<endl;flag_2=1;modify2(Head);break;
		}
    }
    else return ;	
}


void modify3(point Head)
{	
    cout<<endl;
    static int flag_3=0; 
    cout<<"============================"<<endl;
    if(flag_3==0)
	cout<<"======*是否修改信息？*======"<<endl;
	else 
	cout<<"====*是否继续修改信息？*===="<<endl;
	cout<<"======* 1.是   2.否  *======"<<endl;
	cout<<"============================"<<endl;
	int pan;
	cin>>pan;
	if(pan==1)
	{
		cout<<"请选择修改内容：1.编号 2.姓名 3.性别 4.部门 5.级别 6.工资  "<<endl;
		int pan2,a2;
		string a3;
		cin>>pan2;
		if(pan2==1)
		{
			cin>>a2;
			int len=ag.size() ;
			ag.insert(a2); 
			int len1=ag.size() ;
			while(len1==len) 
			{
				cout<<"重复！！"<<endl;
				cout<<"请重新输入："<<endl;
				int a3;
				cin>>a3;
				a2=a3;
				ag.insert(a3);
				len1=ag.size() ;  
			};
			ag.erase(Head->num); 
		}
		else if(pan2!=6) cin>>a3;
		switch(pan2)
		{
			case 1: Head->num=a2;cout<<"修改完成"<<endl;flag_3=1;modify3(Head);break;
			case 2: Head->p3->name=a3;cout<<"修改完成"<<endl;flag_3=1;modify3(Head);break;
			case 3: Head->p3->sex=a3;cout<<"修改完成"<<endl;flag_3=1;modify3(Head);break;
			case 4: Head->p3->department=a3;cout<<"修改完成"<<endl;flag_3=1;modify3(Head);break;
			case 5: Head->p3->rank=a3;cout<<"修改完成"<<endl;flag_3=1;modify3(Head);break;
		}
    }
    else return ;	
}

void modify4(point Head)
{	
    cout<<endl;
    static int flag_4=0; 
    cout<<"============================"<<endl;
    if(flag_4==0)
	cout<<"======*是否修改信息？*======"<<endl;
	else 
	cout<<"====*是否继续修改信息？*===="<<endl;
	cout<<"======* 1.是   2.否  *======"<<endl;
	cout<<"============================"<<endl;
	int pan;
	cin>>pan;
	if(pan==1)
	{
		cout<<"请选择修改内容：1.编号 2.姓名 3.性别 4.部门 5.级别 6.工资  "<<endl;
		int pan2,a2;
		string a3;
		cin>>pan2;
		if(pan2==1)
		{
			cin>>a2;
			int len=ag.size() ;
			ag.insert(a2); 
			int len1=ag.size() ;
			while(len1==len) 
			{
				cout<<"重复！！"<<endl;
				cout<<"请重新输入："<<endl;
				int a3;
				cin>>a3;
				a2=a3;
				ag.insert(a3);
				len1=ag.size() ;  
			};
			ag.erase(Head->num);  
		}
		else if(pan2!=6) cin>>a3;
		switch(pan2)
		{
			case 1: Head->num=a2;cout<<"修改完成"<<endl;flag_4=1;modify4(Head);break;
			case 2: Head->p4->name=a3;cout<<"修改完成"<<endl;flag_4=1;modify4(Head);break;
			case 3: Head->p4->sex=a3;cout<<"修改完成"<<endl;flag_4=1;modify4(Head);break;
			case 4: Head->p4->department=a3;cout<<"修改完成"<<endl;flag_4=1;modify4(Head);break;
			case 5: Head->p4->rank=a3;cout<<"修改完成"<<endl;flag_4=1;modify4(Head);break;
		}
    }
    else return ;	
}

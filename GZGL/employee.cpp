#include<iostream>
#include<iomanip>
#include"employee.h"
using namespace std;

void Employee::get_Employee()
{
	cout<<"������"; 
	cin>>name;
	cout<<"�Ա�"; 
	cin>>sex;
	cout<<"���ţ�";
	cin>>department;
	cout<<"���� [1-���� 2-��ͨԱ��]��";
	cin>>rank;
} 

void Employee::display() 
{
	cout<<left;
	cout<<setw(10)<<name<<setw(10)<<sex<<setw(10)<<department;
	cout<<left;
	cout<<setw(10)<<rank;
}

void Manager::get_salary() 
{
	Manager::get_Employee() ;
	cout<<"���ʣ�"; 
	cin>>salary_Manager;
}

void Manager::mod() 
{
	cin>>salary_Manager;
}

void Manager::salary() 
{
	cout<<" ";
	cout<<left;
	cout<<setw(10)<<salary_Manager;
}

void Salesman::get_salary() 
{
	Salesman::get_Employee() ;
	cout<<"���۶"; 
	cin>>Sales_sales;
	Sales_commission=Sales_sales/10;
}

void Salesman::salary() 
{
	cout<<" ";
	cout<<left;
	cout<<setw(10)<<Sales_commission;
}

void Sales_manager::get_salary() 
{
	Sales_manager::get_Employee() ;
	cout<<"���ʣ�";
	cin>>salary_Manager;
	cout<<"���۶";
	cin>>Sales_sales;
	Sales_commission=Sales_sales/10;
}

void Sales_manager::salary()
{
	cout<<" ";
	cout<<left;
	cout<<setw(10)<<Sales_commission+salary_Manager;
}

void technical::get_salary() 
{
	technical::get_Employee() ;
	cout<<"����ʱ����"; 
	cin>>Business_hours;
	cout<<"ÿСʱ��нˮ��";
	cin>>salary_hour; 
	salary_technical=Business_hours*salary_hour;
}

void technical::salary()
{
	cout<<" ";
	cout<<left;
	cout<<setw(10)<<salary_technical;
}
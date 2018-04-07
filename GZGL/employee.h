class Employee      //   抽象类，雇员 
{
	public:             
		std::string name;         // 姓名 
		std::string sex;          // 性别 
		std::string department;   // 部门 
		std::string rank;         // 级别  
	    void get_Employee();       
		void display();     
};

class Manager :virtual public Employee    // 经理 
{
	public:
		void mod();
		virtual void salary();
		virtual void get_salary(); 
		int salary_Manager;			   //   经理的薪水 
};

class Salesman :virtual public Employee     //  销售人员 
{
	public:
		virtual void salary();
		virtual void get_salary(); 
		int Sales_sales;               // 销售额 
		int Sales_commission;          // 提成 
};

class Sales_manager :public Salesman,public Manager         //  销售经理 
{
	public:
		virtual void salary();
		virtual void get_salary(); 
}; 

class technical :public Employee         // 技术工人 
{
	public:
		virtual void salary();
		virtual void get_salary(); 
		int Business_hours;          //   工作时间 
		int salary_technical;         //    技术工人的薪水 
		int salary_hour;             //    技术工人的每小时的薪资 
};

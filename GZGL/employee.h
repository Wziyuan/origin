class Employee      //   �����࣬��Ա 
{
	public:             
		std::string name;         // ���� 
		std::string sex;          // �Ա� 
		std::string department;   // ���� 
		std::string rank;         // ����  
	    void get_Employee();       
		void display();     
};

class Manager :virtual public Employee    // ���� 
{
	public:
		void mod();
		virtual void salary();
		virtual void get_salary(); 
		int salary_Manager;			   //   �����нˮ 
};

class Salesman :virtual public Employee     //  ������Ա 
{
	public:
		virtual void salary();
		virtual void get_salary(); 
		int Sales_sales;               // ���۶� 
		int Sales_commission;          // ��� 
};

class Sales_manager :public Salesman,public Manager         //  ���۾��� 
{
	public:
		virtual void salary();
		virtual void get_salary(); 
}; 

class technical :public Employee         // �������� 
{
	public:
		virtual void salary();
		virtual void get_salary(); 
		int Business_hours;          //   ����ʱ�� 
		int salary_technical;         //    �������˵�нˮ 
		int salary_hour;             //    �������˵�ÿСʱ��н�� 
};

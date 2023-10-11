#include <asm-generic/errno.h>
#include <iostream>
#include <string>
class Employee
{
    protected:
        std::string name;
        int Emp_id;
        float Salary;
    public:
        Employee(std::string n,int i,float s)
        {
            name=n;
            Emp_id=i;
            Salary=s;
        }
        virtual float Get_TotalSalary()=0;
        virtual void Print(void )
        {
            std::cout<<"The Employee name is "<<name<<" The Employee id is "<<Emp_id<<std::endl;

        }

};
class Sales:public Employee
{
    private:
        float Gross_Sales;
        float Commision_Rate;
    public:
       Sales(std::string n,int i,float s,float gs,float cr):Employee(n,i,s)
       {
         Gross_Sales=gs;
         Commision_Rate=cr;
       }
       float Get_TotalSalary()
       {
        return Salary + (Gross_Sales*Commision_Rate);
       }
       void Print(void)
       {
        Employee::Print();
        std::cout<<"Gross_saled is "<<Gross_Sales<<" Commision Rate"<<Commision_Rate<<std::endl;
       }
       void Set_Gross_Sales(float GS)
       {
            Gross_Sales=GS;
       }
       void Set_commission_Rate(float CR)
       {
            Commision_Rate=CR;
       }
};
class Engineer:public Employee
{
    private:
        std::string specialty;
        int Experience;
        int overtime_hours;
        float overtime_hour_rate;
    public:
        Engineer(std::string n,int id,float s,std::string sp,int e,int oh,float O):Employee(n,id,s)
        {
            specialty=sp;
            Experience=e;
            overtime_hours=oh;
            overtime_hour_rate=O;
        }
        void Print(void)
        {
            Employee::Print();
            std::cout<<"Year of experience is "<<Experience
            <<" Specialty is "<<specialty<<"Over time is "
            <<overtime_hours<<" Over Time Rate is "<<overtime_hour_rate
            <<std::endl;
        }
        void Set_OverTime_Hours(float o)
        {overtime_hours=o;}
        void Set_OverTime_hour_rate(float o)
        {overtime_hour_rate=o;}
        float Get_TotalSalary()
        {
            return Salary+(overtime_hour_rate*overtime_hours);
        }
};
int main(void)
{
    Employee *emp_ptr;
    Sales s1("Ahmed",120,5000,50000,0.10);
    Engineer e1("Hassan",150,7000,"SW Engineer",5,10,50);
    emp_ptr=&s1;
    emp_ptr->Print();
    emp_ptr=&e1;
    emp_ptr->Print();

}
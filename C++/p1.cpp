/*
1.	Write a C++ program to read the data of N employees and compute the Net salary of each employee (DA=52% of Basic and Income Tax (IT) = 30% of the gross salary).
For that, create an Employee class with Employee number, Employee name, Basic, DA, IT, Net Salary.
(Concept: Array of Objects)
*/
#include <iostream>

using namespace std;

class Employee
{
private:
    int num;
    char name[20];
    float basic,it,gross,net_salary;
public:
    void computeNetSalary(){
        gross=basic+0.52*basic;
        it=0.3*gross;
        net_salary=gross-it;
        cout<<"Net salary : "<<net_salary<<endl;
    }
    void getDetails(){
        cout<<"Enter employee number : ";
        cin>>num;
        cout<<"Enter employee name : ";
        cin>>name;
        cout<<"Enter employee basic salary : ";
        cin>>basic;
    }
};


int main()
{
    Employee e[10];
    int n;
    cout<<"Enter the number of employee: ";
    cin>>n;
    for(int i=0;i<n;i++){
        e[i].getDetails();
        e[i].computeNetSalary();
        cout<<"------------"<<endl;
    }
    return 0;
}
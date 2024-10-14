/*
9.	Write a C++ program to read and print employee information using multiple inheritance. 
Create 2 base classes namely BasicInfo and DeptInfo which contains getBasicInfo() and getDeptInfo() respectively to read the information.
(Concept: multiple inheritance.)
*/

#include<iostream>
#include<string>//this is needed to use getline function

using namespace std;

class BasicInfo{
    protected://This should be protected not private
    string name;
    int id;
    string gender;
    public:
    void getBasicInfo(){
        cout<<"Enter employee name : ";
        cin>>name;
        cout<<"Enter employee id : ";
        cin>>id;
        cout<<"Enter employee gender : ";
        cin>>gender;
    }
};

class DeptInfo{
    protected:
    string deptName;
    string assignedWork;
    int time2Complete;
    public:
    void getDeptInfo(){
        cout<<"Enter dept name : "<<deptName;
        cin.ignore();
        getline(cin, deptName);
        cout<<"Enter the assigned work : "<<assignedWork;
        fflush(stdin);
        getline(cin, assignedWork);
        cout<<"Enter the time to complete the work (days): ";
        cin>>time2Complete;
    }
};

class Employee:private BasicInfo,private DeptInfo{//Multiple inheritance
    public:
    void getDetails(){
        cout<<"Enter employee details : "<<endl;
        getBasicInfo();
        getDeptInfo();
    }
    void printDetails(){
        cout<<"---------------"<<endl;
        cout<<"Employee name : "<<name<<endl;
        cout<<"Employee id : "<<id<<endl;
        cout<<"Employee gender : "<<gender<<endl;
        cout<<"Employee dept : "<<deptName<<endl;
        cout<<"Assigned Work : "<<assignedWork<<endl;
        cout<<"Time to complete : "<<time2Complete;
    }
};

int main(){
    Employee emp;
    emp.getDetails();
    emp.printDetails();
    return 0;
}
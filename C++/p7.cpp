/*
7.	Write a C++ program to create a class Data with integer, character and float data members. 
Demonstrate Constructor Overloading on this class with all types of constructors including default argument constructor.
(Concept: Constructor Overloading)
*/

#include<iostream>

using namespace std;

class Data{
    private:
    int i;
    char c;
    float f;
    public://4types
    Data(){
        i=10;
        c='a';
        f=10.1;
    }
    Data(int x,char y,float z){
        i=x;
        c=y;
        f=z;
    }
    Data(Data &d){
        i=d.i;
        c=d.c;
        f=d.f;
    }
    Data(int x,char y,double z){
        i=x;
        c=y;
        f=z;
    }
    void getData(){
        cout<<"i : "<<i<<endl;
        cout<<"c : "<<c<<endl;
        cout<<"f : "<<f<<endl;
    }
};

int main(){
    Data d1;
    cout<<"D1 : "<<endl;
    d1.getData();
    Data d2;
    d2=d1;
    cout<<"D2 : "<<endl;
    d2.getData();
    Data d3(17,'k',5.5);
    cout<<"D3 : "<<endl;
    d3.getData();
    Data d4(55,'v',0.0001);
    cout<<"D4 : "<<endl;
    d4.getData();
    return 0;
}
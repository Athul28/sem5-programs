/*
10.	Write a C++ program to demonstrate the uses of constructors in derived class concepts. 
The three classes that can be created are Alpha, Beta and Gamma in this order having an “is-a” relationship. 
Create at least one data member and one member function in each class. That is n1 and putAlpha() in 
Alpha class, n2 and putBeta() in Beta class, n3 and putGamma() in Gamma class. 
(Concept: Use of Constructors in Derived Classes.)
*/

#include<iostream>

using namespace std;

class Alpha{
    protected://use protected not private
    int n1;
    public:
    Alpha(int x){
        cout<<"Alpha got constructed"<<endl;
        n1=x;
    }
    void getAlpha(){
        cout<<"n1 : "<<n1<<endl;
    }
};

class Beta{
    protected:
    int n2;
    public:
    Beta(int y){
        cout<<"Beta got constructed"<<endl;
        n2=y;
    }
    void getBeta(){
        cout<<"n2 : "<<n2<<endl;
    }
};

class Gamma:private Alpha,private Beta{
    protected:
    int n3;
    public:
    Gamma(int x,int y,int z):Alpha(x),Beta(y){
        n3=z;
    }
    void getValue(){
        getAlpha();
        getBeta();
        cout<<"n3 : "<<n3<<endl;
    }
};

int main(){
    Gamma g(10,20,30);
    g.getValue();
    return 0;
}
/*
2.	Write a C++ program with two classes ABC and XYZ with one integer data member in each class. 
Write member functions to read and display, place a friend function called max() 
in these classes which takes the data members of these classes and computes a maximum of two data members. 
(Concept: Friend function and Reference variable.)
*/

#include<iostream>

using namespace std;

class XYZ;//This is required otherwise u will get error

class ABC{
    private:
    int a;
    public:
    void getValue(){
        cout<<"Enter the value of a : ";
        cin>>a;
    }
    friend void getMax(ABC,XYZ);
};

class XYZ{
    private:
    int b;
    public:
    void getValue(){
        cout<<"Enter the value of b : ";
        cin>>b;
    }
    friend void getMax(ABC,XYZ);
};

void getMax(ABC obj1,XYZ obj2){
    int max=(obj1.a > obj2.b) ? obj1.a:obj2.b;
    cout<<"Maximum number is : "<<max<<endl;
}

int main(){
    ABC obj1;
    XYZ obj2;
    obj1.getValue();
    obj2.getValue();
    getMax(obj1,obj2);
    return 0;
}
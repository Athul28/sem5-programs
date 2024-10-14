/*
5.	Write a C++ program to find the volume of a cylinder, sphere and cube.
(Concept: Function overloading)
*/

#include<iostream>

using namespace std;

double volume(int side){
    return side*side*side;
}

double volume(double radius){//don't forget to use double
    return 3.14*radius*radius*radius*(4.0/3.0);
}

double volume(double radius,double height){
    return 3.14*radius*radius*height;
}


int main(){
    cout<<"Cube : "<<volume(10)<<endl;
    cout<<"Sphere : "<<volume(10.0)<<endl;
    cout<<"Cylinder : "<<volume(10.0,100.0)<<endl;
    return 0;
}
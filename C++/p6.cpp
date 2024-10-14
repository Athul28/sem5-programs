/*
6.	Write a C++ program to demonstrate the working of a copy constructor.
Implement a class called Point with private data members X and Y as the points and getX() and getY()
are the getter functions to get the values and print the same using the main() function.
(Concept: Copy constructor)
*/

#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
    }
    void getX()
    {
        cout << "X : " << x << endl;
    }
    void getY()
    {
        cout << "Y : " << y << endl;
    }
};

int main(){
    Point p1(10,20);
    Point p2=p1;
    cout<<"P1 : "<<endl;
    p1.getX();
    p1.getY();
    cout<<"P2 : "<<endl;
    p2.getX();
    p2.getY();
    return 0;
}
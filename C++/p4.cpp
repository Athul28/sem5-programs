/*
4.	Write a Program to design a class having a static member function named ShowCount()
which has the property of displaying the number of objects created of the class.
(Concept: Applications of the Static keyword)
*/

#include <iostream>

using namespace std;

class Test
{
private:
    int code;
    static int count;

public:
    void setCode()
    {
        code = ++count;
    }
    void getCode()
    {
        cout << "Object no : " << code << endl;
    }
    static void showCount()
    {
        cout << "No of objects : " << count << endl;
    }
};

int Test::count; // Don't forget to write this

int main()
{
    Test t1;
    t1.setCode();
    Test t2;
    t2.setCode();
    Test::showCount();
    Test t3;
    t3.setCode();
    Test::showCount();
    t1.getCode();
    t2.getCode();
    t3.getCode();
    return 0;
}
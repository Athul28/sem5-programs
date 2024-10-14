/*
8.	Write a C++ program to apply bubble sort on an array of integers and float using the concept of function template.
(Concept: Class Template)
*/

#include <iostream>

using namespace std;

template <typename T>
void sort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5};
    float arr2[] = {9.43, 84.3, 43.54};
    sort(arr, 5);
    sort(arr2, 3);
    for (int item : arr)
    {
        cout << item << " ";
    }
    cout << endl;
    for (float item : arr2)
    {
        cout << item << " ";
    }
    return 0;
}
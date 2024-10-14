/*
3.	Write a program to find the largest, smallest & second largest of three numbers. (use inline function MAX and MIN to find largest & smallest of 2 numbers)
(Concept: Inline function)
*/
//What is an inline function??

#include<iostream>

using namespace std;

int MAX(int a,int b){
    return (a > b)? a:b;
}

int MIN(int a,int b){
    return (a<b)?a:b;
}

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers : ";
    cin>>a>>b>>c;
    cout<<"Max : "<<MAX(a,MAX(b,c))<<endl;
    cout<<"MIN : "<<MIN(a,MIN(b,c))<<endl;
    int second_largest;
    if(((a>b)&&(a<c))||((a<b)&&(a>c))){
        second_largest=a;
    }else if((b>a&&a<c)||(b<a&&b>a)){
        second_largest=b;
    }else{
        second_largest=c;
    }
    cout<<"Second largest : "<<second_largest<<endl;
    return 0;
}
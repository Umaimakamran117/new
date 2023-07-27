// Write a program in C++ to print the sum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int sum=0;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    sum = a + b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum;
}
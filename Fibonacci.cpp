// Fibonacci series without recursion

#include<iostream>
using namespace std;

int main() {

    long double num1 = 0, num2 = 1 , num3, number; //number is the digit for which we are finding the series.
    cout<<"Enter the number of element: ";
    cin>>number;

    cout<<num1<<" "<<num2<<" ";

    for(int i=2; i<number; i++) {
        num3 = num1+num2;
        num1 = num2;
        num2 = num3;
        cout<<num3<<" ";
    }
    return 0;
}

//Fibonacci series with recursion.
//WAP to find the factorial of a number upto n;

#include<iostream>
using namespace std;

int main() {

    int number, factorial =1;
    cout<<"Enter the number to find factroial";
    cin>> number;

    if(number < 0) {
        cout<<"Sorry!! I don't support negative numbers";
    }
    else if (number<=1) {
    cout<<number<<"!="<<factorial;
    } else {
        for(int i = number; i >= 2; i--) {
            factorial = factorial * i;
        }
        cout<<factorial;
    }
    return 0;
}
// WAP to create a calculator?

#include <iostream>
using namespace std;


float sum(float a, float b) {
    float res = a+b;
    return res;
}

float subtract(float a,float b) {
    float res = a-b;
    return res;
}

float multiplication(float a,float b) {
    float res = a*b;
    return res;
}

float division(float a,float b) {
    float res = a/b;
    return res;
}


int main () {
    cout<<division(10,3);
}

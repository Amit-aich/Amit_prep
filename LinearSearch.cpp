#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int t) {
    for(int i=0; i<n; i++) {
        if(arr[i] == t) {
            return i;
        } else {
            return -1;
        }
    }
    return 0;

}

int main() {

    int n, t;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    // cin>>arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the target";
    cin>>t;

   cout<<linearsearch(arr, n , t);
   return 0;
}
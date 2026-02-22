#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int n) {
    int m = 0;
    for(int i = 0; i < n/2; i++) {
        m = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = m; 
    }
    return;                           // time complexity = theta(n)
}                                     // Auxilary Space = theta(1) , constant extra space
int main(){
    int arr[] = {34,66,12,8,4,98,98};
    int n = 7;
    Reverse(arr,n);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void Freq(int arr[], int n) {
    int freq = 1;
    int i = 1;
    while(i < n) {
        while(1 < n && arr[i] == arr[i-1]) {
            freq++;
            i++;
        }
        cout<<" "<<+arr[i-1]<<" "<<freq<<" ";
        i++;
        freq = 1;
    }
    if(n==1 || arr[n-1] != arr[n-2]) {
        cout<<arr[n-1]<<" "<<"1 ";
    }
}
//time = theta(n)
int main(){
    int arr[] = {10,10,10,30,30,40};
    int n = 6;
    Freq(arr,n);
    return 0;
}
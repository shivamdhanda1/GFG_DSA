#include <bits/stdc++.h>
using namespace std;
int largestElement(int arr[], int n) {
    // int j = 0;
    // int max = arr[0];
    // for(int i = 1; i < n; i++) {
    //     if(max < arr[i]) {
    //         max = arr[i];
    //         j = i;
    //     }
    // }                                         // big 0(n)
    // return j;

    // or 
    int res = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[res]) res = i;       // theta(n)
    }
     return res;
}
int main(){
    int arr[] = {4,6,120,78,180};
    int n = 5;
    int result = largestElement(arr,n);
    cout<<result;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int DeleteEl(int arr[], int n , int x) {
int i;
for(i = 0; i < n; i++) {
    if(arr[i] == x) {
        break;
    }
}
if(i == n) {
    return n;
}
 for(int j = i; j < n; j++) {
    arr[j] = arr[j+1];
 }
  return n-1;
}

int main(){
    int arr[] = {4,6,2,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;
    DeleteEl(arr,n,x);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
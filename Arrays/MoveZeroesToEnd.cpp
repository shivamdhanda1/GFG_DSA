#include <bits/stdc++.h>
using namespace std;

void End(int arr[], int n) {
int count = 0;
for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
        swap(arr[i],arr[count]);
        count++;
    }
}
for(int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
}
}
      // Efficient solution with one traversal
      // time = BigO(n)
      // Auxilary Space = Big O(1)
int main(){
    int arr[] = {3,5,6,0,9,0,3};
    int n = 7;
    End(arr,n);
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// void Rotate(int arr[], int n, int d) {
// int temp[d];
// for(int i = 0; i < d; i++) {
//     temp[i] = arr[i];
// }
// for(int i = d; i < n; i++) {
//     arr[i-d] = arr[i];
// }

// for(int i = 0; i < d; i++) {
//     arr[n-d+i] = temp[i];
// }
      
// for(int i = 0; i < n; i++) {
//     cout<<arr[i]<<" ";
// }
// }
//  // time = theta(n)
//  // Auxilary space = theta(d) as we have inititalised an temporary array of size d.

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int n = 6;
//     int d = 2;
//     Rotate(arr,n,d);
//     return 0;
// }



//Efficient Solution

#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int low, int high) {
    while(low < high) {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void Rotate(int arr[], int n, int d) {
reverseArr(arr,0,d-1);
reverseArr(arr,d,n-1);
reverseArr(arr,0,n-1);

}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    Rotate(arr,n,d);
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}



//


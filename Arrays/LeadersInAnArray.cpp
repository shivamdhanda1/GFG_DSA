// #include <bits/stdc++.h>
// using namespace std;

// void Arr(int arr[], int n) {

// for(int i = 0; i < n; i++) {
//       bool flag = false;
//     for(int j = i+1; j < n; j++) {
//         if(arr[i] <= arr[j]) {
//             flag = true;
//             break;
//         }
//     }
//     if(flag == false) {
//         cout<<arr[i]<<" ";
//     }
// }
// }
//                     // Naive solution
//                     // time = O(n^2)
// int main(){
//     int arr[] = {7,10,4,3,6,5,2};
//     int n = 7;
//     Arr(arr,n);
//     return 0;
// } 



// Efficient Solution
// Time = theta(n)

#include <bits/stdc++.h>
using namespace std;

void Arr(int arr[], int n) {
int curr_led = arr[n-1]; // here curr_led means current leader
cout<<curr_led<<" ";
for(int i = n-2; i >= 0; i--) {
if(curr_led < arr[i]) {
    curr_led = arr[i];
    cout<<curr_led<<" ";
}
}

}

int main(){
    int arr[] = {7,10,4,3,6,5,2};
    int n = 7;
    Arr(arr,n);
    return 0;
}
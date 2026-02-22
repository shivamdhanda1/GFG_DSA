// time complexity = Theta(n ^ 2)
// It does less memory writes compared to Qucik Sort , Merge Sort, Insertion Sort, etc. 
//But  Cycle sort is optimal in terms of memory writes. 
//Basic idea for HeapSort
// Not Stable (i.e order of equal element may change)
// Its an In-place algorithm, it does not require extra memory for sorting.

//Basic idea is that we found out the minimun element and we put it at the first position then we found out the second minimum element and put it at the second position basically we are sorting the array in increasing order

//Naive Implementation

// #include <bits/stdc++.h>
// using namespace std;

// void SelectSort(int arr[], int n) {
//   const int INF = INT_MAX;
//   int temp[n];
  
//   for(int i = 0; i < n; i++) { 
//     int min_ind = 0;
//     for(int j = 1; j < n; j++) {
//       if(arr[j] < arr[min_ind]) {
//         min_ind = j;
//       }
      
//     }
//     temp[i] = arr[min_ind];
//     arr[min_ind] = INF;
//   }
  
// for(int i = 0; i < n; i++) {
//   arr[i] = temp[i];
// }
// for(int i = 0; i < n; i++) {
//   cout<<arr[i]<<" ";
// }
// }

// int main(){
//   int arr[] = {10,5,8,20,2,18};
//   int  n = 6;
//   SelectSort(arr,n);
//   return 0;
// }


// Optimised Implementation or Efficient Solution
// It is not stable
// Time Complexity = Theta(n ^ 2) // It always takes this much time even if you provide sorted array or reverse sorted array
#include <bits/stdc++.h>
using namespace std;

void SelectSort(int arr[], int n) {
  for(int i = 0; i < n-1; i++) {
    int min_ind = i;
    for(int j = i+1; j < n; j++) {
      if(arr[j] < arr[min_ind]) {
       min_ind = j;
      }
    }
    swap(arr[min_ind],arr[i]);
  }
  for(int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  }
  
int main(){
  int arr[] = {10,5,8,20,2,18};
  int n = 6;
  SelectSort(arr,n);
  return 0;
}
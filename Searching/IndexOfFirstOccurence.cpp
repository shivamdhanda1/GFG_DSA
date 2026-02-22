//Naive solution+
// time = o(n) , Aux space = O(1)
// #include <bits/stdc++.h>
// using namespace std;

// int firstOcc(int arr[], int n,int x) {
//   for(int i = 0; i < n; i++) {
//     if(arr[i]== x) {
//       return i;
//     }
//   }
//   return -1;
// }

// int main(){
//   int n = 7;
//   int x = 15;
//   int arr[] = {1,10,10,10,20,20,40};
//   int res = firstOcc(arr,n,x);
//   cout<<res;
//   return 0;
// }


// Recursive Binary Search
// Time complexity = O(log n)
// Auxilary spcae = O(log n)
// #include <bits/stdc++.h>
// using namespace std;

// int firstOcc(int arr[], int low, int high, int x) {
// if(low > high) return -1;
// int mid = (low + high)/2;
// if(arr[mid] > x) return firstOcc(arr,low,mid-1,x);
// else if(arr[mid] < x) return firstOcc(arr,mid+1,high,x);
// else{
//   if(mid==0 || arr[mid-1] != arr[mid]) {
//     return mid;
//   }
//   else {
//     return firstOcc(arr,low,mid-1,x);
//   }
// }
// }

// int main(){
//   int n = 7;
//   int x = 20;
//   int arr[] = {1,10,10,10,20,20,40};
//   int res = firstOcc(arr,0,6,x);
//   cout<<res;
//   return 0;
// }


// Iterative Implementation
//Best solution for this problem
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x) {
int low = 0; int high = 6;
while(low <= high) {
 int mid = (high + low)/2;
 if(arr[mid] > x) {
  high = mid-1;
 }
 else if(arr[mid] < x) {
  low = mid + 1;
 }
 else {
  if(mid == 0 || arr[mid-1] != arr[mid]) {
    return mid;
  }
  else {
    high = mid - 1;
  }
 }
}
return -1;
}

int main(){
  int n = 5;
  int x = 10;
  int arr[] = {5,10,10,20,20};
  int res = firstOcc(arr,n,x);
  cout<<res;
  return 0;

}




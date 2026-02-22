//time complexity = O(n*n) - quadratic time 
//Naive solution - here we are finding the subarray beginning with the element 
// #include <bits/stdc++.h>
// using namespace std;

// int MaxLength(int arr[] , int n) {
  
//   int res = 1;
// for(int i =0; i < n; i++) {
//   int curr = 1;
//   for(int j = i+1; j < n; j++) {
//     if(arr[j] % 2 == 0 && arr[j-1] % 2 != 0 || arr[j] % 2 != 0 && arr[j-1] % 2 == 0) {
//       curr++;
      
//     }
//     else {
//       break;
//     }
    
//   }
//   res = max(curr, res);
// }
// return res;
// }

// int main(){
//   int arr[] = {2,3,4,5,16,73,89,9,10};
//   int n = 9;
//   int result = MaxLength(arr,n);
//   cout<<result;
//   return 0;
// }


//Efficient solution - here we are finding the subarrays ending with the ith element when we are at index i 
// time complexity = O(n) - linear time
#include <bits/stdc++.h>
using namespace std;

int MaxLength(int arr[] , int n) {
  int res = 1; 
  int curr = 1;
  for(int i = 1; i < n; i++) {
  if(arr[i]%2== 0 && arr[i-1] %2 != 0 || arr[i]%2 != 0 && arr[i-1] % 2 == 0) {
    curr++;
    res = max(res,curr);
  }
  else {
 curr = 1;
  }
  }
return res;
}

int main(){
  int arr[] = {5,10,20,6,3,8};
  int n = 6;
  int result = MaxLength(arr,n);
  cout<<result;
  return 0;
}

// We have 3 indices in an array - low , mid and high 
// low to mid array are sorted , mid + 1 to high are sorted
// so here we have two sorted subarrays
// But we have to sort low to high
// Low need not to be index of 1st element 
// and high need not to be the index of the last element
// The condition is - low <= mid < high
// There is going to be atleast one element from low to mid
// range and there is going to be atleast one element from mid + 1 to high range
// now we have to write a funciton which takes an array as an argument ,takes 3 indices as argument and your function may assume that we have atleast two elements in array and our task is to sort the array from low to high

// here we're going to create two auxilary arrays and then we are going to store the low to mid part in left array and mid + 1 to high part in right array and then we are going to use merge sort logic but instead of printing the array we are going to store the elements of auxilary array into the original array

// time complexity = theta(n) , n is the no. of elements from low to high
// Auxilary space = theta(n)
#include <bits/stdc++.h>
using namespace std;

void Sol(int a[],int n, int low, int mid, int high) {
      int n1 = mid - low + 1;
      int n2 = high - mid;
      int left[n1];
      int right[n2]; 

      for(int i = 0; i < n1; i++) {
        left[i] = a[i];
      }       
      for(int i = 0; i < n2; i++) {
        right[i] = a[mid+1+i];
      }   

      int i = 0, j = 0, k = low;
while(i < n1 && j < n2) {
if(left[i] <= right[j]) {
  a[k] = left[i];
  i++,k++;
}

else{
  a[k] = right[j];
  j++,k++;
}

}

while(i < n1) {
  a[k] = left[i];
  k++,i++;
}  

while(j < n2) {
  a[k] = right[j];
  j++,k++;
}

for(int m = 0; m < n1 + n2; m++) {
  cout<<a[m]<<" ";
}
}

int main(){

  int  a[] = {10,15,20,40,8,11,55};
  int low = 0;
  int mid = 3;
  int high = 6;
  int n = high;
  Sol(a,n,low,mid,high);
  return 0;

}
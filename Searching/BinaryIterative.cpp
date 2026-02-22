// time complexity = log(n) , we are going to have log n iterations in the iterative binary search
// Auxilary space = O(1) , constant time because we were using some constant no. of variables
#include <bits/stdc++.h>
using namespace std;

int Binary(int arr[], int n, int x) {
int low = 0; int high = n - 1;
while(low <= high) {
int mid = (low + high)/2;
if(arr[mid] == x) {
  return mid;
} 
else if(arr[mid] > x) {
  high = mid - 1;
} else {
  low = mid + 1;
}
}
return -1;
}

int main(){
  int n = 5;
  int arr[] = {10,20,30,40,50};
  int x = 40;
  int res = Binary(arr,n,x);
  cout<<res;
  return 0;
}
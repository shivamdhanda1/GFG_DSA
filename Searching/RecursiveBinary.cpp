// time complexity = log(n)
// Auxilary space = O(log (n)) // big of log n elements will be there in the function call stack (i.e O(log n) recursive calls are going to be there)
#include <bits/stdc++.h>
using namespace std;

int Binary(int arr[], int low, int high, int x) {

if(low > high) return -1; //base case

int mid = (low + high)/2;
if(arr[mid] == x) return mid;
else if(arr[mid] > x) return Binary(arr,low,mid-1,x);
else return Binary(arr,mid + 1,high,x);

}

int main(){
  int n = 7;
  int arr[] = {10,20,30,40,50,60,70};
  int x = 50;
  int low = 0;
  int high = n-1;
  int res =Binary(arr,low,high,x);
  cout<<res;
  return 0;
}
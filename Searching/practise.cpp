#include <bits/stdc++.h>
using namespace std;

int getAPeak(int arr[], int n) {
int low = 0, high = n-1;
while(low <= high) {
  int mid = (low + high) / 2;

  if((mid == 0 || arr[mid-1] <= arr[mid])&& (mid == n-1 || arr[mid] >= arr[mid + 1])) {
    return mid;
  }

  if(mid > 0 && arr[mid] <= arr[mid - 1]) {
    high = mid - 1;
  }

  else {
    low = mid + 1;
  }
}
return -1;
}

int main(){
  int arr[] = {5, 20, 40, 30, 20, 50, 60};
    int n = 7;

    int res = getAPeak(arr, n);
    cout << res;
  return 0;
}
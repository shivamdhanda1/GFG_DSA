//Naive Solution
// worst case time complexity = O(n)

// #include <bits/stdc++.h>
// using namespace std;

// int naive(int arr[], int n) {
//   if(n == 1) return arr[0];
//   if(arr[0] >= arr[1]) return arr[0];
//   if(arr[n-1] >= arr[n-2]) return arr[n-1];
//   for(int i = 1; i < n-1; i++) {
//     if(arr[i] >= arr[i+1] && arr[i] >= arr[i-1]) {
//       return arr[i];
//     }
//   }
// return -1;
// }

// int main(){
//   int arr[] = {6,7,8,20,12};
//   int n = 7;
//   int ref = naive(arr,n);
//   cout<<ref;
//   return 0;
// }


//Efficient Solution
// Fact => If the left element to the mid element is greater than mid element then peak element will be on the left side if the right one is greater than mid element then peak element will be on the right side of the array 
// here the array is unsorted
//Since it is a binary search so we are ignoring one half of the array 
//time complexity = O(log n)
//Auxilary space = O(1)
#include <bits/stdc++.h>
using namespace std;

int getAPeak(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high)/ 2;

        // check if mid is a peak
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
            (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
            return mid;
        }

        // if left neighbor is greater, peak lies on left side
        if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        }
        // else peak lies on right side
        else {
            low = mid + 1;
        }
    }
    return -1; // you will never going to return -1 because every array has peak element 
}

int main() {
    int arr[] = {5, 20, 40, 30, 20, 50, 60};
    // It is going to give us the peak element on that side where the element is greater than mid and we are going to check in that array only , but it can also be the case that there is another peak element in the left out array
    int n = 7;

    int res = getAPeak(arr, n);
    cout << res;

    return 0;
}

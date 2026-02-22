//time = O(log n) 
//Here we are skipping one half of the array by doing some constant no. of comparisons
//Auxilary Space = O(1)

 #include <bits/stdc++.h>
 using namespace std;

 int Effi(int arr[], int x, int n) {
   int low = 0;
   int high = n-1;
   while(low <= high) {
    int mid = (low + high)/2;
    if(arr[mid] == x) return mid;
    if(arr[low] <= arr[mid]) {
    if(arr[low] <= x &&  x < arr[mid]) {
      high = mid-1;
      
    }
    else {
        low = mid + 1;
      }
    }
    else {
      if(arr[mid] < x && x <= arr[high]) {
        low = mid + 1;
      }
      else {
        high = mid - 1;
      }
    }
   }
  return -1;
 }

 int main()
 {
   int arr[] = {100,500,10,20,30,40,50};
   int x = 30;
   int n = 7;
   int res = Effi(arr,x,n);
   cout<<res;
   return 0;
 }



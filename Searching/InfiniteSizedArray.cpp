//time = O(position)
//Auxilary space = O(1)

// #include <bits/stdc++.h>
// using namespace std;

// int Naive(int arr[], int x) {
// int i = 0;
// while(true) {
//   if(arr[i] == x) return i;
//   if(arr[i] > x) return -1;
//   i++;
// }
// }


// int main(){
//   int arr[] = {1,20,35,39,50};
//   int x = 50;          
//   int res = Naive(arr,x);
//   cout<<res;
//   return 0;
// }


// Efficient solution
// time = O(log(position))
//In this approach we are going to multiply the indexes with 2 every time(i.e 1 , 2, 4 , 8 , 16 and we can't start with index 0 so we are taking it explicitly because 0 * 2 = 0)
#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int x, int low , int high) {
while(low <= high) {
  int mid = (low + high)/2;
  if(arr[mid]== x) return mid;
  else if(arr[mid] > x ) {
    high = mid-1;
  }
  else{
    low = mid+1;
  }
}
  return -1;
}

int Effi(int arr[], int x) {
  if(arr[0] == x) return 0;
  int i = 1;
  while(arr[i] < x) {
    i = i * 2;

  if(arr[i] == x) return i;
  }
  return binary(arr,x,i/2+1,i-1);
}

int main(){
  int arr[] = {1,10,15,20,40,60,80,100,200,500,1000};
  int x = 100;
  int res = Effi(arr,x);
  cout<<res;
  return 0;
}
// O(n ^ 2 ) Worst Case , it's a quadratic time worst case that is not the best possible time for a sorting algorithm because there exists sorting algorithm that sorts an array in  O(n log n ) time like merge sort and quick sort
// In- Place and Stable (an algorithm is called in place when it doesn't uses any auxilary array or any auxilary space in terms of input size However there are other definitions like there are algorithms like quicksort, which are called in place,however they use recursion call stack but here insertion sort take O(1) auxilary space only and does not take any space even for recursion nothing. )
// Used in practise for small arrays (TimSort and IntroSort)
// There are sorting algorithms which are used in standard library functions for ex. python use timSort(timSort uses merge sort which is a (N log N) algorithm for sorting for general- purpose arrays. And when your array is small, or when you are doing merge sort, and array size becomes small, it's switches to insertion sort. So insertin sort is used in these hybrid algorithms TimSort and IntraSort )
//Hybrid algorithm means they are using 2 or 3 sorting algorithms together.for example timSort uses merge Sort and insertion sort , IntroSort uses heapSort, quickSort and insertionSort and these both algorithms uses insertion sort when your input is small or when your input becomes small
// O(n) in Best Case // Best case happens when your input array is already sorted and the worst case happens when your input array is reverse sorted
 

//Time complexity in best case (Already Sorted) => Theta(n)
//Time complexity in worst case (Reverse Sorted) => Theta(n^2)
//In General time complexity => O(n^2) Big O means upper bound 
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
for(int i = 1; i < n; i++) {
  int key = arr[i];
  int j = i - 1;
  while(j >= 0 && arr[j] > key) {
    arr[j+1] = arr[j];
    j--;
  }
  arr[j + 1] = key;
}
for(int i = 0; i < n; i++) {
  cout<<arr[i]<<" ";
}
}


int main(){
  int arr[] = {20,5,40,60,10,30};
  int n = 6;
  insertionSort(arr,n);
  return 0;
}
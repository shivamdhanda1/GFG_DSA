//Time = O(n ^ 2)
//Bubble Sort is a stable sorting algorithm i.e if you have two items with same value it never changes their original positions or orders
//It only does the swapping when you have larger element on the left side and smaller element on the right side
// If we are at ith iteration then ith elements are already fixed to their last position and their are i largest elements that are already placed so there is no point in comparing the current element with those i largest elements
//The largest unsorted element "bubbles up" to the end 
// Void bubbleSort(arr,n) {
//   for(int i = 0; i < n-1-i; i++) {
//     for(int j = 0; j < n-1; j++) {
//       if(arr[j] > arr[j+1]) {
//         swap(arr[j],arr[j+1]);
//       }
//     }
//   }
// }


// Optimising the code if the array becomes sorted in the middle 
// In this code if swapped remains false it means that no swapping happened so swapped function remained false
// swapped variable enhances the performance when your array is already sorted or about to be sorted and it does not take n^2 time in all the cases
// Void bubbleSort(arr,n) {
//   for(int i = 0; i < n-1; i++) {
//     boolean swapped = false;
//     for(int j = 0; j < n; j++) {
//       if(arr[j] > arr[j+1]) {
//         swap(arr[j],arr[j+1]);
//         swapped = true;
//       }
//     }
//     if(swapped == false) {
//       break;
//     }
//   }

// }
// We are going to use the First Occurence and the Last Occurence function in the question 
// time complexity = O(log n)

// Below is the pseudo code for the same 

// int count(int arr[], int n, int x) {
//   int first = firstOcc(arr,n,x);
//   if(first == -1) {
//     return 0;
//     else {
//       return (lastOcc(arr,n,x)-first + 1);
//     }
//   }
// }
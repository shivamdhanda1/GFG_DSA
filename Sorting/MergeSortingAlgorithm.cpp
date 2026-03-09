// Merge Sort is a divide and conquer algorithm
// We take an input array and we take two indices l and r, l is the first index of this array if your array is 0 based and r is the last index

// So this is what we do im merge sort
//First we check if there are at least 2 elements
// Because if we have one element then it is already sorted so to do something on your input array , to do divide , then sort then merge we need to have atleast 2 elements 
// after that we find the mid point
// after finding the mid point we recursively sort the element from low to mid and then we recursively sort the elements from mid + 1 to r , after sorting these two halfes we merge these two halves (i.e it takes two sorted arrays(i.e two sorted halves of your input) and merger function simply puts the merge logic and makes one sorted array)

// Basically we divided the array into two parts then recursively called the left half and then recursively called the right half which means we sorted the left half and right half then our merge function combines these two sorted arrays
  

//Time complexity of Merge Sort = Theta(n log n)
// Auxilary space because we are using Merge function here = 
// theta(n) because at any moment in ram you are going to need theta(n) space only and after use of finishing of one recursive call the array will be empty and used for the remaining recursive calls so we can just create one left and right array and use that in all the recursive calls
//pseudo code 

// void mergeSort(int arr[], int l, int r) {
// if(r > l) // checking for atleast 2 elements {
// int mid = l + (r-l)/2 // i.e same as (low + high)/2
// mergeSort(arr, l, m);
// mergeSort(arr, mid+1, r);
// merge(arr, l, m, r)// i.e merging the left and right sorted arrays by calling the merge function 
// }
// }
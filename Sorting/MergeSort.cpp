//Divide and Conquer Algorithm (Divide, Conquer and Merge)
// It first divides your input array or list in two parts then it recursively sorts these two parts and after sorting these two parts it merges them.

//Stable Sorting Algorithm

//It works in Theta(n log n) time which is the best possible time which you can get on a single processor and for random input. and one bad thing about merger sort is it takes O(n) Auxi space (extra space), it's not an in-place sorting algorithm in it's normal form but there is a variant of merge sort called block sort which works in theta (n log n ) time and in-place but in its typical form it takes O(n) auxilary space.

//Used in External Sorting (We can bring in parts of input to be sorted in ram, we can sort those parts and by sorting the parts , we can sort the whole array as well, we don't have to have the whole input in them)

//One more bad thing In general for arrays , QuickSort outperforms it.


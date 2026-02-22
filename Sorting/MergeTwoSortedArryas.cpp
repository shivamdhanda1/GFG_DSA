//Naive Solution
//Time = O(m + n) * log(m + n) (because of sorting algo)
//Aux Space = Theta(m + n)
//In Asymptomatic analysis we ignore the lower terms

// #include <bits/stdc++.h>
// using namespace std;

// void Naive(int a[], int b[], int m, int n) {

// int c[m+n];

// for(int i = 0; i < m; i++) {
//   c[i] = a[i];
// }

// for(int i = 0; i < n; i++) {
//   c[m+i] = b[i];
// }

// sort(c,c+m+n); //Basic syntax- sort(array_name, array_name + size);

// for(int i = 0; i < m+n; i++) {
//   cout<<c[i]<<" ";
// }
// }

// int main(){
//   int a[] = {10,15,20,20};
//   int b[] = {1,12};
//   int m = 4;
//   int n = 2;
//   Naive(a,b,m,n);
//   return 0;
// }


//Efficient Solution 
// Time = Theta(m + n) and Aux space = O(1) 
// We are going to come out of the loop if we reach at the end of any of the two arrays
//The idea for the efficient solution is that we are going to traverse both the array simultaneously, we are going to use two index variable i and j , i to access array a elements and j to access array b elements

#include <bits/stdc++.h>
using namespace std;

void Efficient(int a[], int b[], int m, int n) {

int i = 0, j = 0;

while(i < m && j < n) {

if(a[i] <= b[j]) { // here equal case is used so that first array element appear first in the merge sort implementation, we are going to pass first half of the array and second half of the array to this merge function so we want to ensure the first half equal elements should appear first that's why we have equal in the merge
  cout<<a[i]<<" ";
  i++;
}

else {
  cout<<b[j]<<" ";
  j++;
}

}

// from here we are going to print the remaining elements, 
// which are left cause loop terminated after one condition or one index reached its end 


// In the previous loop if one of the index reaches index beyond the last element then we come out of the loop 
// Here We will always execute 1 of these two loops , we will never end both of them
while(i < m) {
  cout<<a[i]<<" ";
  i++;
}

while(j < n) {
  cout<<b[j]<<" ";
  j++;
}
 }

int main(){
  int a[] = {10,20,50};
  int b[] = {5,50,50};
  int m = 3;
  int n = 3;
  Efficient(a,b,m,n);
  return 0;
}
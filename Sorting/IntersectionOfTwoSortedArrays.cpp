// We have to print all the elements which are common in both the arrays and if there is no common element then we are going to print nothing 

// Naive Solution
// Time complexity = O(n * m)
#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n) {
  for(int i = 0; i < m; i++) {
    if(i > 0 && a[i] == a[i-1]) continue;
    for(int j = 0; j < n; j++) {
      if(a[i] == b[j]) {
        cout<<a[i];
        break;
      }
    }
  }
}

int main(){
  int a[] = {1,20,20,40,60};
  int b[] = {2,20,20,20};
  int m = 5;
  int n = 4;
  intersection(a,b,m,n);
  return 0;
}


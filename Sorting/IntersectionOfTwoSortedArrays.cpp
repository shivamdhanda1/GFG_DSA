#include <bits/stdc++.h>
using namespace std;

void Naive(int a[], int m, int b[], int n) {
  int count;
  int l = 0;
  for(int i = 0; i < m; i++) {
    count = 0; 
    
    for(int j = l; j < n; j++) {
      if(a[i] == b[j]) count++;
      l = j;
    }
    if(count > 0) cout<<a[i];
  }
}

int main(){
  int a[] = {1,20,20,40,60};
  int b[] = {2,20,20,20};
  int m = 5;
  int n = 4;
  return 0;
}
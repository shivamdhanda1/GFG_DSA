//Naive solution, time complexity = O(n*n)
//Auxilary Space = O(1)
// My solution 
//Equilibrium point is a point where sum of elements on left is equal to sum of elements on right
#include <bits/stdc++.h>
using namespace std;

bool EquiPoint(int arr[], int n) {
  
  for(int  i = 0; i < n; i++) {
  int sumR = 0;
  int sumL = 0;

    for(int j = i+1; j < n; j++) {
      sumR = sumR + arr[j];
    }
    for(int k = i-1; k >= 0; k--) {
      sumL = sumL + arr[k];
    }
    if(sumR==sumL) {
   return true;
  }
  
}
return false;
}

int main() {

  int arr[] = {4,-2,2};
  int n = 3;
  bool res = EquiPoint(arr,n);
  cout<<res;
  return 0;

}


//Effiecent solution 
//Auxilary Space = O(1)
//time complexity = O(n)
#include <bits/stdc++.h>
using namespace std;

bool EquiPoint(int arr[], int n) {

}

int main(){
   int arr[] = {4,-2,2};
  int n = 3;
  bool res = EquiPoint(arr,n);
  cout<<res; 
  return 0;
}
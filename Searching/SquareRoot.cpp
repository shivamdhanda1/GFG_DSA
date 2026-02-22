// time = theta(sqrt(x)) i.e x ki power half

// #include <bits/stdc++.h>
// using namespace std;

// int Sqrt(int x) {
// int i = 1;
// while(i * i <= x) {
//   i++;
// }
// return (i-1);
// }

// int main(){
//   int x = 16;
//   int res = Sqrt(x);
//   cout<<res;
//   return 0;
// }

//Efficient solution
//time = theta (log x)
#include <bits/stdc++.h>
using namespace std;

int Sqrt(int x) {
  int low = 0;
  int high = x;
  int ans = -1;
  while(low <= high) {
  int mid = (low + high)/2;
  int midSq = mid * mid;
  if(midSq == x) return mid;
  else if (midSq > x) high = mid-1;
  else{
    low = mid+1;
    ans = mid;
  }
  }
  return ans;
}

int main(){
  int x = 16;
  int res = Sqrt(x);
  cout<<res;
  return 0;

}
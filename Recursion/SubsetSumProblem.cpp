#include <bits/stdc++.h>
using namespace std;
int SubsetSum(int arr[] ,int n ,int sum) {
    if(n==0) {
        return (sum == 0) ? 1 : 0;
    }
   return SubsetSum(arr,n-1,sum) + SubsetSum(arr,n-1,sum-arr[n-1]);
}
// Amount of work we are doing in this recursive solution  = 2^n(leaf nodes) + 2^n - 1(internal nodes) If we put it in asymptotic notation we will get = Theta(2^n) = amount of work done here


int main(){
    int arr[3];
    
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    } 
    int sum;
    cin>>sum;
    
   int f = SubsetSum(arr,n,sum);
   cout<<f;
    return 0;
}
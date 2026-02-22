//Naive Solution
#include <bits/stdc++.h>
using namespace std;

int Maxi(int arr[], int n) {
    int res = arr[0];
    
    for(int i = 0; i < n; i++) {
        int curr = 0;
        for(int j = i; j < n; j++) {
            curr = curr + arr[j];
            res = max(curr,res);
        }
    }
    return res;
}

// time = O(n ^ 2)
int main(){
    int arr[] = {-5,1,-2,3,-1,2,-2};
    int n = 7;
    int result = Maxi(arr,n);
    cout<<result;
    return 0;
}



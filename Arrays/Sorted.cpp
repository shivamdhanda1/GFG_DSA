#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n) {
for(int i = 0; i < n-1; i++) {
    if(arr[i] > arr[i+1]) {
        return false;
    }

}                      // My code and it is same as gfg one
                       // time complexity = BigO(n)
                       // Space complexity = O(1) i.e Constant time
                           
return true;
}

int main(){
    int arr[] = {100};
    int n = 1;
    bool sing = sorted(arr,n);
    cout<<sing;
    return 0;

}
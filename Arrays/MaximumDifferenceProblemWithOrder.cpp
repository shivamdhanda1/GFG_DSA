// #include <bits/stdc++.h>
// using namespace std;

// int Max(int arr[], int n) {
//     int res = arr[1] - arr[0];
//     for(int i =0; i < n; i++) {
//         for(int j = i+1; j < n; j++) {
//          res = max(res,arr[j]-arr[i]);
//         }
//     }
//     return res;
// }
//                       // My code 
//                       // time = theata(n^2 )
// int main(){
//     int arr[] = {7,9,5,6,3,2};
//     int n = 6;
//     int max = Max(arr,n);
//     cout<<max;
//     return 0;
// }



//efficient solution
//time = theta(n)
//auxilary space = theta(1)
#include <bits/stdc++.h>
using namespace std;

int Max(int arr[], int n) {
int min_val = arr[0];
int res = arr[1] - arr[0];
for(int j = 1; j < n; j++) {
res = max(res,arr[j]-min_val);
min_val = min(arr[j],min_val);
}
return res;
}
                      
int main(){
    int arr[] = {7,9,5,6,3,2};
    int n = 6;
    int max = Max(arr,n);
    cout<<max;
    return 0;
}

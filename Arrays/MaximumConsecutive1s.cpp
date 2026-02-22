// #include <bits/stdc++.h>
// using namespace std;

// int maxi(int arr[], int n) {
//     int res = 0;
//     for(int i = 0; i < n; i++) {
//         int curr = 0;
//         for(int j = i; j < n; j++) {
//             if(arr[j] == 1) {
//                 curr++;

//             }
//             else {
//                 break;
//             }
            
//         }
//         res = max(res,curr);
//     }
//     return res;
// }
// //Naive solution , time = O(n^2)
// // Auxilary space = O(1)
// //Efficient solution below this one
// int main(){
//     int arr[] = {0,1,1,1,1,0,1,1};
//     int n = 7;
//     int l = maxi(arr,n);
//     cout<<l;
//     return 0;
// }


//Efficient Solution , time = O(n)
//Auxilary space = O(1)
#include <bits/stdc++.h>
using namespace std;

int maxi(int arr[], int n) {
    int res = 0;
    int curr = 0;
for(int i = 0; i < n; i++) {
    if(arr[i] == 0) {
        curr = 0;
    }
    else {
        curr++;
        res = max(res,curr);
    }
    
}
     return res;
}


int main(){
    int arr[] = {0,1,1,1,0,1,1};
    int n = 6;
    int l = maxi(arr,n);
    cout<<l;
    return 0;
}

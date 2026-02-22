// #include <bits/stdc++.h>
// using namespace std;

// void TwoOdd(int arr[] , int n) {
// for(int i = 0; i < n; i++) {
//     int count = 0;
//     for(int j = 0; j < n; j++) {
//         if(arr[i] == arr[j]) count++;
//     }
//     if(count % 2 != 0) {
//         cout<<arr[i]<<" ";
//     }
// }
// }                    // Naive solution i.e not efficient
//                      // time - theta(n raise to power 2)
// int main(){          // aux space - theta(1)
//     int n;
//     cout<<"size of array : ";
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     TwoOdd(arr,n);
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void TwoOdd(int arr[] , int n) {
    int x = arr[0];
for(int i = 1; i < n; i++) {
   x = x ^ arr[i];
}
int k = (x & (~(x-1))); // k corresponds to the lastmost or the rightmost set bit of x  , and it has only one set bit which is rightmost set bit os x i.e other bits are 0 - if x is 6 then k = 2 , if x = 11 then k = 1, and if x = 4 then k = 4 , if x = 12 then k = 4
int l = 0;
int f = 0;
for(int i = 0; i < n; i++) {
   
    if((arr[i] & k) != 1) { //elements with their kth no. bit as setbit.
        l = l ^ arr[i];
    } 
    else {           // elementws with their kth no. bit as not set.
    k = k ^ arr[i]; 
    }
}
cout<<l<<" ";
cout<<k;

}                       // efficient solution
                       // time = theta(n)
int main(){          //Auxilary space = theta(1) i.e constant aux space
    int n;
    cout<<"size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    TwoOdd(arr,n);
    return 0;
}
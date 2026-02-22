// #include <bits/stdc++.h>
// using namespace std;

// int Rmv(int arr[], int n) {
// int temp[n];
// temp[0] = arr[0];
// int res = 1;
// for(int i = 1; i < n; i++) {
//     if(temp[res-1] != arr[i]) {
//         temp[res] = arr[i];
//         res++;
//     }
// }
// for(int i = 0; i < res; i++) {
//     arr[i] = temp[i];
// }
// return res;
// }
//        // time complexity = O(n)
//        //Auxilary space = O(n) as we need temporary array of size n

//        //Efficient solution is below which requires constant auxilary space i.e O(1)
// int main(){
//     int arr[] = {23,23,45,45,64,7,2};
//     int n =  7;
//     int rest = Rmv(arr,n);
//     cout<<rest;
//     return 0;
// }


// Efficient solution which requrires Constant auxilary space O(1)
// Time complexity = O(n)
#include <bits/stdc++.h>
using namespace std;

int rmv(int arr[] ,int n) {
int res = 1;
for(int i = 1; i < n; i++) {
    if(arr[i] != arr[res-1]) {
        arr[res] = arr[i]; 
        res++;
    }
}
return res;
}

int main(){
    int arr[] = {23,23,45,45,64,87,87,92};
    int n =  8;
    int rest = rmv(arr,n);
    cout<<rest;
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n) {
    int count;
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }
        cout<<arr[i]<<" : "<<count<<" , ";
    }
}

int main(){
    int arr[] = {3,5,6,12,86,3};
    int n = 6;
    Frequency(arr,n);
    return 0;
}
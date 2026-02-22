#include <bits/stdc++.h>
using namespace std;

int Maxi(int arr[], int n) {
    int max = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if((arr[i] & 1) == 1) {
          count++;
        }
        if(max < count) {
            max = count;
        }
    }
}

int main(){
    int arr[] = {0,1,1,0,1,0};
    int n = 6;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int CountSet(int n) {
    int count = 0;
    while(n > 0) {
        if(n%2 != 0) count++; 

        n = n/2;
    }
    return count;
}

int main(){
    int n;
    cout<<"enter no. : ";
    cin>>n;
    int result = CountSet(n);
    cout<<result;
    return 0;
}
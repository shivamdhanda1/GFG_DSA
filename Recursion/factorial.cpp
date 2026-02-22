
// Non Tail Recursive Solution
// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n) {
//     if(n==0 || n==1) {
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter number : ";
//     cin>>n;
//   int l =  fact(n);
//   cout<<l;
//     return 0;
// }



//Tail Recursive Solution - these are optimises by modern compilers and they take less time and less auxilary space compared to their equivalent 
//non tail recursive solutions
#include <bits/stdc++.h>
using namespace std;

int fact(int n, int k) {
    if(n==0 || n==1) {
        return k;
    }
    return fact(n-1, k*n);
}

int main(){
    int n;
    int k = 1;
    cout<<"enter number : ";
    cin>>n;
  int l =  fact(n,k);
  cout<<l;
    return 0;
}


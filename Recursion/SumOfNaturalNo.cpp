// #include <bits/stdc++.h>
// using namespace std;

// int Sum(int n) {
//     if(n==0) {
//         return 0;
//     }                 // time complexity = Theta(n)
//                  // T(n) = T(n-1) + Theta(1) i.e when you call n then it calls n-1 calls and each call do a constant amount of work
//       // at a moment i.e at last function call(i.e in the worst case) you will have n+1 fn calls in the function call stack
//       // Auxilary Space = Theta(n)
//     return n + Sum(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter no. : ";
//     cin>>n;
//     int f = Sum(n);
//     cout<<f;
//     return 0;
// }


// Tail Recursive solution - Maine khud kiya hai GFG pai nhi krvaya 
#include <bits/stdc++.h>
using namespace std;

int Sum(int n, int k) {
    if(n==0) {
        return k;
    }            
    return Sum(n-1 ,k + n);
}

int main(){
    int n;
    int k = 0;
    cout<<"enter no. : ";
    cin>>n;
    int f = Sum(n,k);
    cout<<f;
    return 0;
}

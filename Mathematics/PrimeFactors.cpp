// #include <bits/stdc++.h>
// using namespace std;
// bool IsPrime(int n) {
//     if(n <= 1 ) return false;
//     if(n==2||n==3) return true;
//     if(n%2==0 || n%3==0) return false;
//     for(int i = 5; i*i <= n; i+= 6) {
//         if(n%i==0 || n%(i+2)==0) return false;
//     }
//     return true;
// }                                                    //Naive solution
// void PrimeFactors(int n) {
// for(int i = 2; i < n; i++) {                   //O(n logn)
//     if(IsPrime(i)) {
//         int x = i;
//         while(n%x==0) {
//          cout<<i;
//          x = x*i;
//         }
//     }
// }
// }
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     PrimeFactors(n);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void PrintPrimeFactors(int n) {
//     for(int i = 2; i*i <= n; i++) {
//       while(n%i==0){
//         cout<<i<<" ";
//         n = n/i;                    
//       }                                     //Efficient solution
//     }                          // another best code below this one
//     if(n>1) cout<<n;
// }

// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     PrintPrimeFactors(n);
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void PrintPrimeFactors(int n) {
    while(n%2==0){
        cout<<2<<" ";
        n = n/2;
    }

    while(n%3==0) {
        cout<<3<<" ";
        n = n/3;                                  // most efficent code
    }                                         //    Use this one
                                         // for worst case when the no. will be prime- theta(sqrt(n))
    for(int i = 5; i*i <= n; i+= 6) {
    while(n%i==0) {
        cout<<i<<" ";
        n = n/i;
    }
    while(n%(i+2)==0) {
        cout<<i+2<<" ";
        n = n/i+2;
    }
    }
    if(n>3) cout<<n;
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    PrintPrimeFactors(n);
    return 0;
}
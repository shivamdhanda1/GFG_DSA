// #include <bits/stdc++.h>
// using namespace std;

// void Sieve(int n) {
// vector <bool> IsPrime(n+1,true);
// for(int i = 2; i*i <= n; i++) {
// if(IsPrime[i]) {
//     for(int j = 2*i; j <= n; j=j+i) {
//         IsPrime[j] = false;
//     }
// }
// }                                       //Simple Implementation of Sieve
// for(int i = 2; i <= n; i++) {            // one of two divisors of a  
//                                  // no. is always lesser than or equal 
//                                  //to the sqrt of n  
//                  //O(n*sqrt n) - time complexity


//     if(IsPrime[i]) cout<<i<<" ";
// }

// }
// int main(){
//     int n;
//     cout<<"enter no. : ";
//     cin>>n;
//     Sieve(n);
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// void Sieve(int n) {
// vector <bool> IsPrime(n+1,true);
// for(int i = 2; i*i <= n; i++) {
// if(IsPrime[i]) {
//     for(int j = i*i; j <= n; j=j+i) {
//         IsPrime[j] = false;
//     }
// }
// }                                       //Optimesed solution j= i*i 
//                                     //instead of j=i*2
// for(int i = 2; i <= n; i++) {      // better one is below
                                 

//     if(IsPrime[i]) cout<<i<<" ";
// }

// }
// int main(){
//     int n;
//     cout<<"enter no. : ";
//     cin>>n;
//     Sieve(n);
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void Sieve(int n) {
vector <bool> IsPrime(n+1,true);
for(int i = 2; i<=n; i++) {
    if(IsPrime[i]) {
        cout<<i<<" ";
        for(int j = i*i; j <= n; j+= i) {
            IsPrime[j] = false;
        }
    }                      //shortest implementation of Optimised
                        //solution so use this one
                  //time complexity - O(n log log n)
        // it almost like linear cause log log n grows very very slow

}

}
int main(){
    int n;
    cout<<"enter no. : ";
    cin>>n;
    Sieve(n);
    return 0;
}
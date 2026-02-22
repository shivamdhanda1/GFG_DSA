// // Bitwise operators are Constant time operators

// #include <bits/stdc++.h>
// using namespace std;

// bool PowerOfTwo(int n) {
// if(n==0) return false;
// while(n != 1) {
//     if(n % 2 != 0) {
//         return false;
//     }
//     n = n/2;
// }                                 //Naive solution
// return true;
// }                              //BigO(logn ) = time complexity

// int main(){
// int n;
// cout<<"enter n : ";
// cin>>n;
// bool result = PowerOfTwo(n);
// cout<<result;
//     return 0;
// }


// If count set bit is 1 return true else false cause binary representation of powers of 2 have only one set bit
#include <bits/stdc++.h>
using namespace std;

bool PowerOfTwo(int n) {
    if(n==0) return false;
    // or directly we can write this whole code in 1 line instead of writing if(n==0) return false;
    // return (n && ((n & (n-1)) == 0)); // used && logical and here
 return ((n & (n-1)) == 0); // the brian algorithm unsets the right most set bit so if there is only 1 set bit as in case of power of 2 then it will give 0 as answer i.e true here              
                  // time taken = big O(count of set bits)}                
                  // efficient solution
}

int main(){
int n;
cout<<"enter n : ";
cin>>n;
bool result = PowerOfTwo(n);
cout<<result;
    return 0;
}
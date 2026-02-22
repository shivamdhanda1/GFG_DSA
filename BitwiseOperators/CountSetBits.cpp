// #include <bits/stdc++.h>
// using namespace std;
 
// int CountSetBits(int n) {
//     int count = 0;
//     while(n > 0) {
//         if(n%2 == 1) {  // used to check the last bit 

//             count++; // if(n&1 != 0) count ++ ,bitwise operator is 
//                         // faster then % operator
//         }
//      n = n/2;    // shifting the 2nd last bit to the last bit position
//     }
//     return count;
// }
//      // time = theta(d) , where d = no. of bits from last bit to MSB
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int result = CountSetBits(n);
//     cout<<result;
//     return 0;
// }



//Brian Kerningum's Algorithm
// In this we are only iterating through 1 bit , no lSB to MSB
// #include <bits/stdc++.h>
// using namespace std;
 
// int CountSetBits(int n) {
//     int res = 0;
// while(n > 0) {                                          
// n = n & (n-1); // here if n = 40 i.e 101000 then n-1 = 39 i.e 100111
//     res++;      // n-1 always gives binary form in such
// }           // a way that last 1 of n will become 0 and the trailing 0
// return res; // will become 1 bits in n-1
// }  // and the logic here is that we have to make the last set bit as 0 
// int main(){ // that's why we are using that expression
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int result = CountSetBits(n);
//     cout<<result;
//     return 0;
// }



//Lookup Table Solution
// We are going to assume that we have only 32 bits in binary representation of input no.
// the idea is to set count bits in O(1) time with some preprocessing 
//involved
#include <bits/stdc++.h>
using namespace std;
 int tbl[256];
void initialize() {
    
    tbl[0] = 0;
    for(int i = 1; i < 256; i++) {
        tbl[i] = tbl[i & (i-1)] + 1;
    }
}

int CountSetBits(int n) {
    return tbl[n & 255] + tbl[(n >> 8) & 255] + tbl[(n >> 16) & 255] + tbl[(n >> 24)];
}

int main(){ 
    int n;
    cout<<"enter n : ";
    cin>>n;
   initialize();
   int result = CountSetBits(n);
   cout<<result;
    return 0;
}


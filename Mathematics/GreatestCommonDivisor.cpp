// #include <bits/stdc++.h>
// using namespace std;

// int GCD(int sm, int lr) {
//     int temp;
// for(int i = sm; i >= 1; i--) {
//  if(sm%i==0 && lr%i==0) {
//     temp = i;
//  }
//                                                     // My Code
//                                             // time - O(min(a,b))

// }
// return temp;
// }

// int main(){
//     int sp;
//     cout<<"Enter 1st no. : ";
//     cin>>sp;
//     int lr;
//     cout<<"Enter 2nd no. : ";
//     cin>>lr;
//     int sm = min(sp,lr);
//     int result = GCD(sm,lr);
//     cout<<"GCD of "<<sm<<" and "<<lr<<" is : "<<result;
//     return 0;
// }



//Using Eulidean Algorithm - Basic version 
// #include <bits/stdc++.h>
// using namespace std;
// int GCD(int a, int b) {
//     while(a != b) {
//         if(a > b) {
//             a = a-b;
//         }
//         else {                         // GFG Code simple version 
//             b = b - a;            // Iske niche ek or code likha hai
//         }
//     }
//     return a;
// }

// int main(){
//     int m;                         
//     int n;
//     cout<<"Enter 1st no. ";
//     cin>>m;
//     cout<<"Enter 2nd no. ";
//     cin>>n;
//     int result = GCD(m,n);
//     cout<<result;
//     return 0;
// }



//Euclidean Algorithm
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
if(b==0) return a;

return GCD(b,a%b);

                        //Most Optimised version - use this code
}

int main(){
    int m;
    int n;
    cout<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    int resutl = GCD(m,n);
    cout<<resutl;
    return 0;
}
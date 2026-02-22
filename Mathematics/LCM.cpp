// #include <bits/stdc++.h>
// using namespace std;

// int LCM(int m, int n) {
// int temp = max(m,n);
// int f = 0;
// for(int i = temp; i <= m*n; i = i+temp)
//  {
// if(i%m==0 && i%n==0) {
// return i;
// }
//  }
// return 0;                             //My code 
// }                                    // time complexity O(m*n)
                                    // bad code 
// int main(){
//     int m,n;
//     cout<<"Enter m : ";
//     cin>>m;
//     cout<<"Enter n : ";
//     cin>>n;
//     int result = LCM(m,n);
//     cout<<result;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if(b==0) return a;
                                // time - O(log(min(a,b)))
    return GCD(b,a%b);
}

 int LCM(int m, int n) {
     return (m*n)/GCD(m,n);    // formula--  a*b = gcd(a,b) * lcm(a,b)
 }                              

int main(){               //GFG code more efficient, use this one
    int m,n;
    cout<<"enter m : ";
    cin>>m;
    cout<<"enter n : ";
    cin>>n;
   int lcm = LCM(m,n);
   cout<<lcm;
    return 0;
}
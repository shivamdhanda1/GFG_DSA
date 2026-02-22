// Set Bit = 1
// Non-Set Bit = 0
//if we have to find a no. whose Kth bit is 1 then that no. is 2 raise to power k-1 
 
// #include <bits/stdc++.h>
// using namespace std;

// void SetOrNot(int n, int k) {
// int f = pow(2,k-1);
// if((n & f) != 0) {
//     cout<<"Yes";   //set bit or 1
// } else {
//     cout<<"No";
// }                                       //   My code 

// }
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int k;
//     cout<<"Enter number : ";
//     cin>>k;
//     SetOrNot(n,k);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void SetOrNot(int n, int k) {
//     int x = 1;
// for(int i = 0; i < k-1; i++) {
// x = x * 2;
// }
// if((n & x) != 0) {
//     cout<<"yes";                         //Naive solution
// } else {                              // time : theta(k)
//     cout<<"No";
// }
// }

// int main(){
//     int n;
//     cout<<"enter no. : ";
//     cin>>n;
//     int k;
//     cout<<"enter k : ";
//     cin>>k;
//     SetOrNot(n,k);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

//  void SetOrNot(int n, int k) {
//     for(int i = 0; i < k-1; i++) {
//         n = n/2;
//     }                                // another naive solution
 
//  if((n & 1) != 0) {
//      cout<<"yes";                         
//  } else {                              
//      cout<<"No";
//  }
// }
// int main(){
//      int n;
//      cout<<"enter no. : ";
//      cin>>n;
//      int k;
//      cout<<"enter k : ";
//      cin>>k;
//      SetOrNot(n,k);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

//  void SetOrNot(int n, int k) {
//  int f = 1 << k-1; // 2 raise to power k-1
//  if((n & f) != 0) {
//      cout<<"yes";                         //efficent solution
//  } else {                       //Another efficient solution below
//      cout<<"No";
//  }
// }

// int main(){
//      int n;
//      cout<<"enter no. : ";
//      cin>>n;
//      int k;
//      cout<<"enter k : ";
//      cin>>k;
//      SetOrNot(n,k);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

//  void SetOrNot(int n, int k) {
//  int x = n >> k-1;             // Another efficent solution

//  if((x & 1) != 0) {
//      cout<<"yes";                         
//  } else {                              
//      cout<<"No";
//  }
// }

// int main(){
//      int n;
//      cout<<"enter no. : ";
//      cin>>n;
//      int k;
//      cout<<"enter k : ";
//      cin>>k;
//      SetOrNot(n,k);
//     return 0;
//}
// #include <bits/stdc++.h>
// using namespace std;

// int  ComputingPower(int m,int n) {
//     if(n==0) return 1;
//     if(n==1) return m;
//     int l = 1;
//     for(int i = 1; i <= n; i++) {               
//         l = l * m;                   //Naive solution
//     }                            //Theta(n)
//     return l;
// }

// int main(){
//     int m,n;
//     cout<<"Enter number : ";
//     cin>>m;
//     cout<<"Enter power : ";
//     cin>>n;
//     int result = ComputingPower(m,n);\
//     cout<<result;
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int Power(int x,int n) {
if(n==0) return 1;

int temp = Power(x,n/2);
temp = temp * temp;
if(n%2==0) return temp;
else {
    return temp * x;
}                                        //Efficient Solution
}                     //  theta(logn) - time complexity
                     //Auxilary space - theta(logn)
int main(){
    int x,n;
    cout<<"Enter number : ";
    cin>>x;
    cout<<"Enter power : ";
    cin>>n;
    int result = Power(x,n);
    cout<<result;
    return 0;
}



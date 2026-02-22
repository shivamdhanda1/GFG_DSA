// // This will be the solution if the index or position of the  person sitting in the circle is starting from 0

// #include <bits/stdc++.h>
// using namespace std;

// int Josephus(int n, int k) {
//     if(n==1) {
//         return 0;
//     }
//     return (Josephus(n-1,k) + k) % n;                    // there is code below for numbering starting from 1
// }

// int main(){
//     int n;
//     cout<<"enter no. of people : ";
//     cin>>n;-
//     int k;
//     cout<<"Person to be killed : ";
//     cin>>k;
//     int result = Josephus(n,k);
//     cout<<result;
//     return 0;
// }



// this will be the solution if the index or position of the person sitting in the circle is stariting from 1
#include <bits/stdc++.h>
using namespace std;

int Josephus(int n, int k) {
    if(n==1) {
        return 0;
    }
    return (Josephus(n-1,k) + k) % n;
}

int MyJos(int n, int k) {
    return Josephus(n,k) + 1;
}

int main(){
    int n;
    cout<<"enter no. of people : ";
    cin>>n;
    int k;
    cout<<"Person to be killed : ";
    cin>>k;
    int result = MyJos(n,k);
    cout<<result;
    return 0;
}
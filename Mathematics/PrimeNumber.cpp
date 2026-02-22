// #include <bits/stdc++.h>
// using namespace std;

// bool PrimeCheck(int n) {
// if(n <= 1) return false;
// if(n == 2 || n == 3) return true;
// if(n%2==0 || n%3==0) return false;

// for(int i = 5; i*i <= n; i += 6 ) { 
// if(n%i==0 || n%(i+2)==0) {
//         return false;
   
//     }                                             //My code and GFG  
                                                     //also
                                               // More efficient in this case

// }
// return true;
// }

// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     bool print = PrimeCheck(n);
//     cout<<print;
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

bool PrimeCheck(int n) {
if(n <= 1) return false;


for(int i = 2; i*i <= n; i++ ) {
if(n%i==0) {
        return false;
   
    }                                             //GFG Code  Naive method

}
return true;
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    bool print = PrimeCheck(n);
    cout<<print;
    return 0;
}
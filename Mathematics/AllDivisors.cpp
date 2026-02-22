// #include <bits/stdc++.h>
// using namespace std;

// void AllDivisors(int n) {
//     for(int i = 1; i*i <= n; i++) {
    
//         if(n%i==0) {
//              cout<<i<<" ";
//             if(i!= n/i) {
//                 cout<<n/i;                  

//                                     // correct but not in ascending 
                                       //order and don't use this one 
//                                      // theta(sqrt(n))
//                                      //theta(1)-auxilary space

//             }        
//         }
//     }                                   
// }

// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     AllDivisors(n);
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

void PrintDivisors(int n) {
    int j = 0;
    for(int i = 1; i*i < n; i++) {
        if(n%i==0) 
        {
        cout<<i<<" ";              //most efficient code use this one
     }                         // in ascending order
        j = i;                 //theta(sqrt(1))-time complexity
                              //theata(1)-Auxilary space
    }

    for(int i = j+1; i >= 1; i--) {
        if(n%i==0) {
            cout<<n/i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    PrintDivisors(n);
    return 0;
}
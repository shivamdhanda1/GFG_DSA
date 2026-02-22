// #include <bits/stdc++.h>
// using namespace std;
// int Fact(int x) {
//     int fact = 1;
//     // for(int i = 2; i <= x; i++) {
//     //    fact = fact * i;
//     // }
//     while(x > 1) {
                                            //Theta (n) - time complexity
//         fact = fact * x;                 // O(1) - auxilary space
//         x--;
//     }
//     return fact;
// }

// int main(){
//     int x;
//     cout<<"enter x ";
//     cin>>x;
//     int f = Fact(x);
//     cout<<f;
//     return 0;
// }


//Using Recursion

#include <bits/stdc++.h>
using namespace std;
int Fact(int x) {
if(x==0) return 1;

return x * Fact(x-1);

}                                    // theta (n) - time complexity
                                         // theta(n) - Auxilary Space
int main(){                              // It causes extra overhead so 
    int x;              //our previous iterative solution is better
    cout<<"enter x ";
    cin>>x;
    int f = Fact(x);
    cout<<f;
    return 0;
}
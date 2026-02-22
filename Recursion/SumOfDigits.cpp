// #include <bits/stdc++.h>
// using namespace std;

// int SumDigits(int n) {
//     if(n==0) {
//         return 0;
//     }
// return SumDigits(n/10) + n % 10;
// }
//                // time complexity = Theta(d) , where d = digits
// int main(){    // Auxilary Space = Theta(d) , d = digits
//     int n;
//     cout<<"enter no. ";
//     cin>>n;
//     int result = SumDigits(n);
//     cout<<result;
//     return 0;
// }                         

// little efficent version below this line
// instead of writing if(n==0) write if(n <= 9) return n;

//if we have also a iterative solution for these type of question then 
// iterative solution is always prefered because this recursive solution is going to have extrea overhead for recursive calls and it also going to recquire extra space

// Iterative solution
#include <bits/stdc++.h>
using namespace std;

int SumDigits(int n) { 
    int f = 0;
    while(n > 0) {
    f = f + n % 10;
     n = n / 10;
             // time = Theta(d) , this code has same time but it will going to run faster because of the low overhead recquired for function calls 
    }        // Auxilary space = Theta(1) ,take less space
    return f;
}

int main(){
    int n;
    cout<<"enter no. ";
    cin>>n;
    int result = SumDigits(n);
    cout<<result;
    return 0;
}
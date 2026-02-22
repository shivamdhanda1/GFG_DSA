// #include <bits/stdc++.h>
// using namespace std;

// int CountDigit(int x) {
// string f = to_string(x);

// return f.length();                         // not good 

// }                                             // Mine code

// int main(){
//     int x;
//     cout<<"Enter number : ";
//     cin>>x;
//     int l = CountDigit(x);
//     cout<<l;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int Count(int x) {
    int res = 0;                                         // Gfg code
    while(x > 0) {                           // good as take less time 
        x = x/10;                             // and less space
        res++;
    }
    return res;
}

int main(){
    int x; 
    cin>>x;
    int f = Count(x);
    cout<<f;
    return 0;
}

// Theta(d) is time complexity where d is no. of digits
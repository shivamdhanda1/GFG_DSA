// #include <bits/stdc++.h>
// using namespace std;

// int trailingZeroes(long long x) {
//     int Trailing = 0;
// while(x%5==0) {
//     x = x/5;
//     Trailing++;
// }
// return Trailing;

// }

// int main(){                                   // My Code
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     long long factorial = 1;
//     for(int i = 2; i <=n; i++) {
//         factorial *= i;
//     }
//     int answer = trailingZeroes(factorial);
//     cout<<"Trailing Zeroes of "<<n<<" are : "<<answer;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int TrailingZeroes(int x) {
    int temp = 0;
while(x >= 5) {
    x = x/5;
    temp = temp + x;
   
}                                       // My code but more efficent  
                                     // then above code
return temp;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int result = TrailingZeroes(n);
    cout<<"Trailing Zeroes of "<<n<<" are :"<<result;
    return 0;
}



// int countTrailingZeroes(int n) {

// int res = 0;
// for(int i = 5; i <= n;  i*=5;) {           // GFG code and it is also 
                                            // more efficient then 1st code and it is more cleaner and more proffessional than 2nd one so remember both 2nd and 3rd but use 3rd professionally
 //   res = res + n/i;                   
// }
// return res;
// }


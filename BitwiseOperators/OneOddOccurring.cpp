// Here we take an assumption that in an array of numbers there is always only 1 no. that appears odd amount of times  and we have to find that no.

// #include <bits/stdc++.h>
// using namespace std;

// int CountOddOcc(int arr[] ,int n) {
    
//     for(int i = 0; i < n; i++) {
//         int count = 0;
//         for(int j = 0; j < n; j++) {
//            if(arr[i] == arr[j]) count++; 
//         }
//         if(count % 2 != 0) return arr[i];
//     }                                       //Naive solution
//     return 0;                        // O(n^2) = time
// }

// int main(){
//     int n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cout<<"enter no. "<<i<<" : ";
//         cin>>arr[i];
//     }
//     int res = CountOddOcc(arr,n);
//     cout<<res;
//     return 0;
// }



//CONCEPT
// x ^ x = 0 ,,,,,, y ^ 0 = y = i.e in bitwise xor if both bits are different then resultant bit is 1 otherwise 0
// y ^ y ^ y = y ,i.e if we do this odd times than resultant is always y
// x ^ x ^ x ^ x = x ,i.e if we do this even time than result is always x
// we can also use commutative and associative property i.e arranging all x and y together with same variable
#include <bits/stdc++.h>
using namespace std;

int CountOddOcc(int arr[] ,int n) {
    int reg = arr[0];
for(int i = 1; i < n; i++) {
       reg = reg ^ arr[i];
}
return reg;
}
int main(){                           //Efficient solution
    int n;                       // time = theta(n)
    cout<<"Size of array : ";    //Auxilary space = O(1)
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout<<"enter no. "<<i<<" : ";
        cin>>arr[i];
    }
    int res = CountOddOcc(arr,n);
    cout<<res;
    return 0;
}
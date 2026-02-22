#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(string &n,int start, int end) {
    if(start >= end) {
        return true;
    }
return(n[start] == n[end]) && IsPalindrome(n,start+1,end-1); 
//logical and operator is used and that what is called short circating i.e if first statement is false then the second one will not execute i.e recursion will not take place

}
               // In the worst case we will be checking every character
int main(){    // so Worst case time complexity is Theta(n)
    string n;
    cout<<"enter string : "; // In the best case corner elements  
    cin>>n;            //do not match immediately returning false
    int start = 0;    //Best Case time complexity is theta(1)
    int l = n.length();
    int end = l-1; // So we can say Time Complexity is BigO(n)
    bool result = IsPalindrome(n,start,end);
    cout<<result;
    return 0; // T(n) = T(n-2) + Theta(1)
}                      // Auxilary space = BigO(n)
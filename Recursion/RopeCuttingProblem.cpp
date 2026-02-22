#include <bits/stdc++.h>
using namespace std;
int RopeCutting(int n, int a, int b, int c) {
    if(n == 0) {
        return 0;
    } 
       if(n < 0) {
            return -1;
        }
    int res = max(RopeCutting(n-a, a,b,c),max(RopeCutting(n-b,a,b,c),RopeCutting(n-c,a,b,c)));
      // Using one max we can only compare two values at a time
    if(res == -1) {
         return -1;
         } 
    else {
        return res + 1;                        
                        // time complexity in upper bound = O(3 ^ n)
    }              // Upper bound means worst case i.e BigO
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int answer = RopeCutting(n,a,b,c);
    cout<<answer;
    return 0;
}

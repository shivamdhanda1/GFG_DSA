#include <bits/stdc++.h>
using namespace std;

bool IsPalin(int x) {
int rev = 0;
int temp = x;
while (temp!=0) {
    int ld = temp%10;
    temp = temp/10;
    rev = rev*10 + ld;
}
 if(rev == x) return true;
 else { return false;}
}

int main(){
    int x;
    cout<<"enter number : ";
    cin>>x;
    bool k = IsPalin(x);
    cout<<k;
    return 0;
}

// Theta (d) is time complexity where d is no. of digits
#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char a, char b, char c) {
    if(n==1) {
        cout<<"Move 1 disk to "<<c<<endl;
        return;
    }
towerOfHanoi(n-1, a, c, b);
cout<<"Move "<<n<<" disk to "<<c<<endl;
towerOfHanoi(n-1, b, a, c);
}

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    towerOfHanoi(n,a,b,c);
    return 0;
}
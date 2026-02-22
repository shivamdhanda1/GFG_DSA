#include <bits/stdc++.h>
using namespace std;
void PowerSet(string f) {
int l = f.length();
int s = (1 << l);
for(int i = 0; i < s; i++) {
  for(int j = 0; j < l; j++) {
   if((i & (1 << j)) != 0) {
    cout<<f[j];
   }                                
  }                                          //efficient solution
  cout<<endl;                     //time = theta(2 raise to power n * n)
}
}
int main(){
    string s; 
    cin>>s;
    PowerSet(s);
    return 0;
}
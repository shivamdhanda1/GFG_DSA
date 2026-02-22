//For a string of length n ,there are going to be 2^n subsets
//if "AB" is a string then " ", "A", "B","AB" are its subsets
// In this problem you have to assume that all the characters in the string are distinct,see the given string represent a set and sets typically have distinct values that's why we are making this assumption

#include <bits/stdc++.h>
using namespace std;

void Subsets(string &l, string curr ="",int i = 0 ) {
if(i==l.length()) {
    cout<<curr<<endl;
    return;
}

Subsets(l,curr,i+1);
Subsets(l,curr+l[i],i+1);
}

int main(){
    string l;
    cout<<"enter string : ";
    cin>>l;
    Subsets(l);
    return 0;
}
//The idea is - We need to see if we have solution for smaller problems can we use it to solve the overall problem , we wish to print n numbers here from n to 1 , now if I have a solution which prints no. from n-1 to 1 then I can use this solution and I can call this solution, I can print n on the screen and call this recursive solution. That's the idea to solve the recursion , the question arrises when do we stop , so for that we are going to write base case

#include <bits/stdc++.h>
using namespace std;

void Print(int n) {
    if(n == 0) {
        return; 
    }
    cout<<n<<endl;
    Print(n-1);
}
              // as there are n+1 function calls i.e 
              //print(4),(3),(2),(1),(0) and every fn call is doing some
              //constant amount of work so this is how we can say time
              //complexity is theta(n) i.e T(n) = T(n-1) + theta(1)
              // after solving time comp. = Theta(n)

              //there will be a moment i.e when Print(0) where you will have n+1 function calls in the call stack so its 
              // Auxilary space = Theta(n)
int main(){
    int n; 
    cout<<"enter n : ";
    cin>>n;
    Print(n);
    return 0;
}
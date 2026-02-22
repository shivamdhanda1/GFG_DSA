// How to solve this problem  using recursion
// We need to think in terms of solutions of sub problems ,if we can recursively solve the problem of n-1 no. , suppose we have a fn which 
// prints no. from  1 to n-1 recursively then we just need to call this funcition to first print no. from 1 to n-1 then we need to print n so first make a recursive call for (n-1) then print n


// Non Tail Recursive Solution (Always a line of code after recursive call)
#include <bits/stdc++.h>
using namespace std;

void Print(int n)
{
    if (n == 0) return;

    Print(n - 1);
    cout << n <<endl;
}                           // Time complexity = Theta(n)
                 // the most fn calls in the call stack will going to be 
                 // n + 1 fn call so
                 // Auxilary space = O(n) i.e bigO of n
int main()        // Another solution below
{
    int n;
    cout << "enter n : ";
    cin >> n;
    Print(n);
    return 0;
}



//Tail Recursive solution for the same code(i.e when then last line of the function is recursive call i.e no more execution after that line)
// In this the parent call doesn't have to do more work after child fn
//call i.e no more work after the recursive call
// generally faster than Non Tail recursive solution
// We cannot convert every Non Tail Recursive solution to Tail Recursive solution
//Tail Recursive Solution - these are optimises by modern compilers and they take less time and less auxilary space compared to their equivalent 
//non tail recursive solutions
#include <bits/stdc++.h>
using namespace std;

void Print(int f,int n)
{
    if (n == 0) return;
     cout<<f<<endl;
    Print(f+1,n-1);  //last line is recursive call so no overhead(i.e extra works in terms of creating a stack for new function ) and the compiler will do tail call elimination and the code will run faster 
    // Tail call elimination means , f = f + 1 , n = n - 1
    // goto start; 
    //then function starts from a label which is start: (which is present in the first line of function)
}               

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    Print(n);
    return 0;
}

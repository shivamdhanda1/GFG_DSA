//Binary Exponentiation
//you can use long long instead to int in these type of questions as value of power can go really high


//Use this one cause it looks easy
#include <bits/stdc++.h>
using namespace std;

int IterativePow(int x, int n) {
    int res = 1;
while(n>0) {   // this loop tranverse through all the bits of n's binary 
 //representation i.e from LSB(least significant bit i.e  rightmost ,it represents the smalleset value of 2 raise to power 0) to the MSB(most significant bit i.e leftmost it represents the largest place value)
 // In signed numbers , MSB is used as the sign bit
    if(n%2!=0) {
        // bit 1            //time complexity : O(log n) - we are doing 
                     //n/2 here in the loop so when we have such a loop
    res = res * x;    // we will always be going to have 
                      // log n time complexity
    }
        else{         //Auxilary Space = O(1) so this is better than
        // bit 0       // recursive solution
    }               
    n = n/2;
    x = x * x;
}
return res;
}

int main(){
    int x,n;
    cout<<"enter number : ";
    cin>>x;
    cout<<"enter power : ";
    cin>>n;
    int answer = IterativePow(x,n);
    cout<<answer;
    return 0;
}



//It can further be optimesd using bitwise operator and shift operator
// This way (i.e using int M) we can handle large no. or values under modulo of a no. M
// here the int M part and modulo part is just for examples like if they ask us to use modulo under large no. then we have to use this not in '
//normal conditions
#include <bits/stdc++.h>
using namespace std;

int IterativePow(int x, int n,int M) {
    int res = 1;
while(n>0) {   
                   
    if(n&1) {              // it will always be non-zero if n is odd, it
        // bit 1          //checks whether n is odd or even and gives 1
    res = (res * x)%M;    // for odd n and gives 0 for even n
    }
        else{         
    }
    n = n>>1;  //Shift operator which means you are dividing n by 
    x = (x * x)%M; // 2 raise to power 1 , it gives you same resutlt and
}       // it is faster as it is bitwise operator
return res;
}

int main(){
    int x,n;
    cout<<"enter number : ";
    cin>>x;
    cout<<"enter power : ";
    cin>>n;
    int answer = IterativePow(x,n);
    cout<<answer;
    return 0;
}







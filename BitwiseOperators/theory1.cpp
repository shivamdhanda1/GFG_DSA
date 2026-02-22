// 1. Bitwise AND : ( & ) - it applies and gate i.e gives 1 when both bits are 1 otherwise 0
//First it considers binary representation of both the operands of the operators then applies AND gate and changes the resultant binary representation to decimal represention

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 3;  //Binary representation : 00---0011 , the two 1 in end and 30 zeroes in front of them for 32 bit representation for 62-bit it will be 60 zeroes in front
    int y = 6; //Binary representation : 00---0110
    cout<<(x & y); // resultant binary 00---0010 i.e output is 2
    return 0;
}


// 2. Bitwise OR : ( | ) - gives 1 if atleast 1 bit is 1 otherwise 0
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 3;
    int y = 6; 
    cout<<(x | y); //output 7
    return 0;
}



// 3. Bitwise XOR : ( ^ ) - it gives 1 if both bits are different otherwise 0

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 3;
    int y = 6; 
    cout<<(x ^ y); //output 5
    return 0;
}
// Bitwise Not : ~  i.e it does inverse of the all the bits in binary representation
// it's a unary operator i.e it works on single operand unlike other bitwise operators which we have discussed so far as those are binary operator
// takes binary representation of input and inverse every bit
 
//Bit position: 7   6   5   4   3   2   1   0
//Binary:       1   0   0   1   0   1   1   0
//              ^                           ^
 //              MSB                        LSB

// least significant bit i.e  rightmost ,it represents the smalleset value of 2 raise to power 0) to the MSB(most significant bit i.e leftmost it represents the largest place value)
 // In signed numbers , MSB is used as the sign bit i.e means: the leftmost bit doesn’t contribute to magnitude like the other bits — instead, it tells you whether the number is positive or negative.
//MSB = 0 → Number is positive (or zero).

//MSB = 1 → Number is negative.

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     unsigned int x = 1; // Unsigned means you can't have any negative no.
//     // So if your no. is represented using 32-bit then for unsigned your no. are 
//     // going to be in range from 0 t0 2 raise to power 32 - 1 
//     // equals to 4294967295
     

     
//     cout<<(~x)<<endl;  //11--111110 which is just equals to 4294967294

//     x = 5;
//     cout<<(~x); // 11---010 = 4294967290
//     return 0;
// }



// Signed numbers (-2 raise to power 31 to 2 raise to power 31 -1)
// Now see signed no. By default no. are signed in C++
// When you have signed no. the leading 1 means it is a negative no.
//If the MSB (Most Significant Bit) = 0 → the number is non-negative (0 or positive).
 // if you are going to provide a positive no. then it's going to convert into negative and if you provide negative then to positive
// the negative no. are stord in 2s complement form 
// 1s complement is inversing the bits i.e if no. is -10 = 00--001010
// to 11--110101
// then adding 1 that's it it will give us binary form 
// 2s complement of x = 2 raise to power 32 - x in decimal representation

//If the MSB = 1 → the number is negative.


//  00001010 → MSB = 0 → decimal +10

// 11110110 → MSB = 1 → this is -10 (two’s complement form)

#include <bits/stdc++.h>
using namespace std;

int main(){
     int x = 1; // in signed if no. is positive x then the output of ~x will be -(x+1)
    
    cout<<(~x)<<endl;  //output -2
    int y = -4;
    cout<<(~y)<<endl; //output 3 - in negative no. first we found how it is actually stored in memory by 2s complemnt then we inversed that
    x = 5;
    cout<<(~x); //output -6
    return 0;
}
// It is not recommended to use ~ operator on signed no. because it is not written in C++ standards that negative no. are stored this way and same applies for left shift and right shift , we don't need to use them with negative no. because the behaviour is undefined
//Only negative no. are represented using 2s complement form 
//Positive no. are represented  normally using  binary to decimal conversion
// 4. Left Shift : << - i.e moves the bits to left side of the binary representation 
// Remove and Ignore leading y bits 
// move remaining 32-y bits to leftmost
// Append y zeroes at the end 

// x << y is equivalent to x * 2 raise to power y if leading y bits are
// 0 in x. it is equal to multiplication because if we are appending
//  0 in end then it equals to multiplication by 2 raise to power y.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 3;
    cout<<(x<<1)<<endl; //shift the bits representation from 00---000011 
 // to 00---000110 i.e 1st leading 0 is removed and all the bits shifted to left and a trailing zero is added so output of this is 6 in decimal

    cout<<(x<<2); // shifts the bits to 2 bits in left i.e first removes 
                  //first two leading zeroes then all bits shifts to left
                  // to become 00---001100 so output in decimal is 12
    cout<<endl;

    int y = 4;

    int z = (x << y);

    cout<<z; // i.e 00--110000 - 48 in decimal
    return 0;
}




// 5. Right Shift: >> i.e opposite of left shift
// Remove and ignore the trailing y bits
// move remaining 32-y bits to rightmost
// Add y zeroes at the begining

// x >> y is equivalent to [x/2 raise to power y] and we used floor to ignore the things after decimal

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 33; // 00---100001
    cout<<(x>>1)<<endl;  // 00---010000 // output = 16
 

    cout<<(x>>2);  //00---001000 //output = 8

    cout<<endl;

    int y = 4;

    int z = (x >> y); 

    cout<<z;  //00---000010 //output = 2
    return 0;
}

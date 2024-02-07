#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
int main()
{

   
    /*
        BITWISE OPERATOR

        AND (&)
            0 0 = 0
            1 0 = 0
            0 1 = 0
            1 1 = 1

        OR (|)
            0 0 = 0
            1 0 = 1
            0 1 = 1
            1 1 = 1
        
        NOT(~)
            0 = 1
            1 = 0
            
        XOR (^)
            0 0 = 0
            1 0 = 1
            0 1 = 1
            1 1 = 0    
    */
   /*
   
    int a = 3;
    int b = 9;
    cout << (a & b) << endl; // 3 & 9 0011 &(*) 1001 = 0001(1)
    cout << (a | b) << endl; // 3 | 9 0011 |(+) 1001 = 1011(11)
    cout << ~a << endl;      // ~ 3 0011 => 1's = 1100 => 2's 1100 + 1 = 1101(13) 11 00+1 1
    cout << (a ^ b) << endl; // 3 ^ 9 0011 ^ 1001 = 1010(10)
   */
    /*
    OUTPUT
    1
    11
    -4
    10
    */
//    Left Shift and Right Shift 

// in positive number  padding with 0 & in negative number padding is compiler dependent
   cout<<(7<<1)<<endl; // 0000 0111(7) << 0000 1110(14) (left shift) (* 2)  
   cout<<(17<<2)<<endl; // 
   cout<<(7>>1)<<endl; // 0000 0111(7) >> 0000 0011(3) (right shift) (/ 2)
   cout<<(17>>2)<<endl;

    // Increment and Decrement
    
   int i = 5;
   cout<<"Post Increment: "<<(i++)<<endl;
   cout<<"Pre Increment: "<<(++i)<<endl;
   cout<<"Post Decrement: "<<(i--)<<endl;
   cout<<"Pre Decrement: "<<(--i)<<endl;

    return 0;
}
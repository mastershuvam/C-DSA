//bit wise operators in c++


// AND - &
// OR - |
// XOR - ^
// NOT - ~

// 1. AND - &

//input: 2 3
// a  b  - x
// 1  0  - 0
// 1  1  - 1  
//output: 2-> 01

//2. OR - |
//input: 2 3
// a  b  - x
// 1  0  - 1
// 1  1  - 1
//output: 3-> 11

//3. XOR - ^
//input: 2 3
// a  b  - x
// 1  0  - 1
// 1  1  - 0
//output: 1-> 01

//leftshift - <<
//rightshift - >>

#include<iostream>
using namespace std;

int main(){
    /*
    int a;
    cout<<"Enter 1st number: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number: ";
    cin>>b;

    cout<<"a & b = "<<(a&b)<<endl;
    cout<<"a | b = "<<(a|b)<<endl;
    cout<<"a ^ b = "<<(a^b)<<endl;
    cout<<"~a = "<<(~a)<<endl;
    cout<<"~b = "<<(~b)<<endl;
    */

    //rightshift
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    //leftshift
    cout<<(21<<1)<<endl;
    cout<<(21<<1)<<endl;

    return 0;
}






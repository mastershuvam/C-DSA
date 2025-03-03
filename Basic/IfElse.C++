
/* q1. Write a program to check whether a number is positive, negative or zero.
Input: 5
Output: Positive
Input: -5
Output: Negative
Input: 0
Output: Zero
a>0 -> print "Positive"
a<0 -> print "Negative"
a=0 -> print "Zero"




#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>0){
        cout<<"Positive"<<endl;
    }
    else if(a<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Zero"<<endl;
    }
}

*/


/*
q2. 

a>b -> print a 
a<b -> print b
a=b -> print "Both are equal"
input:
Enter A number: 20
Enter B number: 10
output:
20 A is greater then: 10


#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter A number: ";
    cin>>a;
    cout<<"Enter B number: ";
    cin>>b;

    if(a>b){
        cout<<a<<" A is greater then: "<<a-b<<endl;
    }
    else if(a<b){
        cout<<b<<" B is greater then: "<<b-a<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }

    return 0;
}


q3. tell me output of this code

#include<iostream>
using namespace std;

int main(){
    int a = 9;

    if(a == 9){
        cout<<"Nine ";
    }
    if(a>0){
        cout<<"Positive ";
    }
    else if(a<0){
        cout<<"Negative ";
    }
    else{
        cout<<"Zero ";
    }
    return 0;
}


q4. tell me output of this code

#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = a+1;

    if((a=3)==b){
        cout<<"a is equal to b";
    }else{
        cout<<a+1;
    }
}



//q5.tell me output of this code

#include<iostream>
using namespace std;

int main(){
    int a = 24;

    if(a>20){
        cout<<"I ";
    }else if(a==24){
        cout<<"Love ";
    }else{
        cout<<"Coding ";
    }
}



//q6. if 
// 'a' to 'z'->this is lowercase letter
// 'A' to 'Z'->this is uppercase letter
// '0' to '9'->this is digit
// otherwise this is special character
// input: a
// output: Lowercase letter
// input: A
// output: Uppercase letter
// input: 5
// output: Digit
// input: @
// output: Special character


#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch>='a' && ch<='z'){
        cout<<"Lowercase latter";
    }else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase latter";
    }else if(ch>='0' && ch<='9'){
        cout<<"Digit";
    }else{
        cout<<"Special character";  
    }

    return 0;
}

*/



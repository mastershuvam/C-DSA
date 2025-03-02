
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

*/
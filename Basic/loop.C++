/*
.................
    WHILE LOOP
.................
*/

/*
***********************************
 q1. Print numbers from 1 to n.
***********************************

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;

    while(i<=n){
        cout<<i<<" ";
        i++;
    }

    return 0;
}


********************************
 q2. Print numbers from n to Z.
********************************

#include<iostream>
using namespace std;

int main(){
    char n;
    cout<<"Enter a character: ";
    cin>>n;
    char i = 'A';

    while(i<=n){
        cout<<i<<" ";
        i++;
    }
}


***********************************************
 q3. Print numbers from 1 to n in reverse order
***********************************************    


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = n;

    while(i>=1){
        cout<<i<<" ";
        i--;
    }

    return 0;
}


*************************
q4. sun of n even numbers
*************************

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int i = 1;
    int sum = 0;

    while(i<=n){
        if(i%2==0){
            sum = sum + i;
            i++;
        }
        i++;
    }
    cout<<"Sum of "<<n<<" even numbers is: "<<sum<<endl;
    return 0;

}

****************
q5. prime or not
****************

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=2;
    
    int count = 0;

    while(i<n)
    {
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }else{
            cout<<"Prime number"<<endl;
        }
        i++;
        break;
    }

    return 0;
}

*/



/*
.................
    FOR LOOP
.................
*/

//1st type

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no: ";
    cin>>n;

    int i;
    for(i=1;i<=n;i++){
        cout<<i<<endl;
    }
    return 0;
}



//2nd type

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i;
    for( ; ; ){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
    return 0;
}

*********************
//print fibonachi no
*********************

//0,1,1,2,3,5,8,13,21

// n = (n-1)+(n-2)

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;

    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";


    for(int i = 1; i<=n; i++){
        int sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }

    return 0;
}

*****************
//check prime no
*****************

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    bool isPrime = 1;

    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime==1){
        cout<<"This is a prime no";
    }else{
        cout<<"This is a non prime no";
    }

    return 0;
}



*********
//Scoping
*********
#include<iostream>
using namespace std;

int main(){
    int a =10;//Global Scope

    for(int i = 1;i<=a;i++){
        int a = 23;//Local Scope 
        cout<<a<<endl;
    }
    return 0;
}

*/


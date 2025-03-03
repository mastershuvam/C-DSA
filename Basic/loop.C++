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


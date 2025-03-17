//1st aproch

/*
#include<iostream>
using namespace std;


int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    
    vector<int>binary;

    while(n>0){
        binary.push_back(n%2);
        n=n/2;
    }

    for(int i=binary.size()-1;i>=0;i--){
        cout<<binary[i];
    }
    
}

*/

//2nd aproch

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1;
        ans = (bit*pow(10,i)+ans);

        n = n>>1;
        i++;
    }

    cout<<"Answar is: "<< ans <<endl;
}

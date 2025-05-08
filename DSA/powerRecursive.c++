/*
Calculating Power using Recursion
a=4,b=2,

if(b==0){
   return 1
}

if(b==even){
    return a,
}

int ans = a*power(a,b/2);

if(b%2==0){
    return ans*ans;
}else{
    return a*ans*ans;
}

*/


#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }
    
    if(b==1){
        return 1;
    }
    
    int ans = a*power(a,b/2);
    
    if(b%2==0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }
}

int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    
    int dig = power(a,b);
    cout<<dig<<endl;
}


/*
//q1 square pattern
// input: 5


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
*/
//q2. print like this
/*
    1111
    2222
    3333
    4444

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

*/

/*
q3. print like this
    1234
    1234
    1234
    1234


#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

*/

/*

q4. print like this
    4321
    4321
    4321
    4321


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = n;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}

*/

/*

q5. print like this

j=1 j=2 j=3 j=4
1   2   3    4 
5   6   7    8 
9   10  11  12 
13  14  15  16 



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

/*
q6. print like this

*
**
***
****


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count = 1;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<*;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

*/


/*
q7. print like this

1 
2 3 
4 5 6 
7 8 9 10 


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count = 1;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
    
*/

/*
q8. print like this

1           i = 1
2 3         i = 2
3 4 5       i = 3
4 5 6 7     i = 4
5 6 7 8 9   i = 5



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    
    while(i<=n){
        int j = 1;
        int count = i;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}



q9. print like this
A A A A
B B B B
C C C C
D D D D



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    char ch = 'A';

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}

q10. print like this

A B C
B C D
C D E


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    char ch = 'A';

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        ch = ch - n + 1;
        i++;
    }
    return 0;
}

*/

/*
q11. print like this

A
B B
C C C
D D D D
E E E E E



#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    char ch = 'A';

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
    return 0;
}

Q12. print like this

A
B C
C D E
D E F G
E F G H I



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        char ch = 'A'+i-1;
        
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


q13. print like this
D
C D
B C D
A B C D =  4



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        char ch = 'A'+n-i;

        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

q14. print like this

        *
      * *
    * * *
  * * * *
* * * * *



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;


    int i = 1;

    while(i<=n){
        int j =1;
        while(j<=n){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

* * * *
* * *
* *
*



#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            if(j<=n-i+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}

q16. print like this

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;

    while(i<=n){
       //int j = 1;
       //space traingle (1st part)
       int space = n-i;
       while(space){
        cout<<" ";
        space--;
       }
       //triangle (2nd part)
       int j = 1;
       while(j<=i){
        cout<<j;
        j = j+1;
       }
       //triangle (3rd part)
       int k = i-1;
       while(k){
        cout<<k;
        k--;
       }
       cout<<endl;
        i++;
    }
    return 0;
}

*/

/*
solve hw pattern pattern no 17
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;

    while(i<=n){
        //1st part
        int j = 1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        //2nd part
        int k = 1;
        while (k <= 2 * i - 2) {  
            cout << "* ";
            k++;
        }
        //3rd part
        int l = n - i + 1;
        while (l >= 1) {
            cout << l << " ";
            l--;
        }

        cout << endl;
        i++;
    }
}
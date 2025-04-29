#include<iostream>
using namespace std;

int main(){
    int arr[5] = {22,122,12,3,6};
    
    /*
    cout<<"1st->" << arr << endl;
    cout<<"2nd->" << &arr[0] << endl;
    cout<<"3rd->"<< arr[0] << endl;
    cout<<"4th->"<<*arr<<endl;
    cout<<"5th->"<<*arr+1<<endl;
    cout<<"6th->"<<*(arr+1)<<endl;
    cout<<"7th->"<<*(arr)+1<<endl;
    cout<<"8th->"<<arr[2]<<endl;
    cout<<"9th->"<<*(arr+2)<<endl;
    */
    
    int i = 3;
    cout<<i[arr]<<endl;
    cout<<arr[i]<<endl;
    
    int temp[10] ={1,2};
    cout<< sizeof(temp)<<endl;
    cout<< "1st->" << sizeof(*temp)<<endl;
    cout<< "2nd->" << sizeof(&temp)<<endl;
    
    int *ptr = &temp[0];
    cout<<"3rd->"<<sizeof(ptr)<<endl;
    cout<<"4th->"<<sizeof(*ptr)<<endl;
    cout<<"5th->"<<sizeof(&ptr)<<endl;
    
    
    int a[20] = {1,2,3,5};
    cout<<"6th->"<<&a[0]<<endl;
    cout<<"7th->"<<&a<<endl;
    cout<<"8th->"<<a<<endl;
    
    int *ptr2 = &a[0];
    cout<<"9th->"<<ptr2<<endl;
    ptr2 = ptr2+1;
    cout<<ptr2<<endl;
    
    /*
    int arr2[10];
    arr2=arr2+1;
    */
    
}

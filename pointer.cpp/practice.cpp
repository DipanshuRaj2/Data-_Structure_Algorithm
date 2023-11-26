#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num = 5;

    cout<< num << endl;

    //address of opertor - &

    cout<<"address of num is : " << &num <<endl;
    
    int *ptr = &num;

    cout <<"Address is : "<< ptr <<endl;
    cout <<"value is : "<< *ptr <<endl;

    double d =2.2323;
    double *p2 =&d;

    cout <<"Address is : "<< p2 <<endl;
    cout <<"value is : "<< *p2 <<endl;


    cout <<" size of num is :"<< sizeof(num) << endl;
    cout <<" size of double is :"<< sizeof(d) << endl;


   cout<<" size of pointer of num is : "<< sizeof(ptr) << endl;
   cout<<" size of pointer of d is : "<< sizeof(p2) << endl;

    return 0;
}
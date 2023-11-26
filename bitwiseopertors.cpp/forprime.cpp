#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    bool prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            // cout<<"not prime no";
            break;
        } 
     
    }
    if(prime==0){
        cout<<"not a prime no\n";
    }
    else{
        cout<<"is aprime no\n";
    }

    return 0;
}
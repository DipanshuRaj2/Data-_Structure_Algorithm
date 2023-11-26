#include <iostream>
using namespace std;
int main(){
    // char ch;
    // cout<<"enter the any value"<<endl;
    // cin>>ch;
    // if(ch>='A'&& ch<='Z'){
    //     cout<<"this is the upper case"<<endl;
    // }
    // if(ch>='a' && ch<='z'){
    //     cout<<"this is lower case"<<endl;

    // }
    // if(ch>='1' && ch<='9'){
    //     cout<<"this the numeric"<<endl;
    // }
    // int n;
    // cin>>n;
    // int sum=0;
    // for(int i=0;i<=n;i++){
    //     if(i%2==0){
    //     sum=sum+i;
    //     }
    // }
    // cout<<sum;
    // return 0;
    int n;
    cin>>n;
    int sum;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            
            sum=sum+i;

        }
    }
    cout<<sum;
}

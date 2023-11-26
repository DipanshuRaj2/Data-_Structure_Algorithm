#include<iostream>
using namespace std;
int main(){
    // int a=2;
    // int b=3;
    // cout<<"a&b"<<" "<<(a & b)<<endl;
    // cout<<"a|b"<<" "<<(a | b)<<endl;
    // cout<<"~a"<<" "<<(~a )<<endl;
    // cout<<"a&b"<<" "<<(a ^ b)<<endl;

    // cout<<(17>>1)<<endl;
    // cout<<(14>>2)<<endl;
    // cout<<(17<<1)<<endl;
    // cout<<(12<<2)<<endl;

    //pre increment and post increment

    // cout<<endl;
    // int i=7;
    // cout<<++i<<endl;
    // //8 phele increment hoga wo i ka value print hoga
    // cout<<i++<<endl;
    // //8 i=9 phele i ka value print hoga tab inc.
    // cout<<i--<<endl;
    // //9 i=8
    // cout<<--i<<endl;
    // //7

    //questions 
    // int a, b=1; 
    // a = 10 ;
    //  if(++a){
    //    cout<<b;}
    // else{
    //    cout<<++b;}
    // int n;
    // cout<<"enter the value of n\n";
    // cin>>n;
    // cout<<"printing count from 1 to n\n";
    // int i=1;
    // for(; ; ){
    //     if(i<=n){
    //         cout<<i<<endl;
         
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

//   for(int a=0 ,b=1 ,c=2; a>=0 && b>=1 && c>=2; a--,b-- ){
//     cout<<a<<" "<<b<<" "<<c<<endl;
//   }
int n;
cout<<"enter the value of n\n";
cin>>n;
int sum =0;
for(int i=0;i<=n;i++){
    sum=sum+i;
}

cout<<sum<<endl;



    return 0;
}
#include<iostream>
using namespace std;
int main(){
int n;
// WAP TO PRINT THE COUNTING NO.*********************************
// cout<<"enter the value of n :-\n";
// cin>>n;
// int i=1;
// while(i<=n){
   
//     cout<<i<<" ";
//     i++;
// }


// WAP TO PRINT THE SUM OF EVEN NO.******************************
// cout<<"ENTER THE VALUE OF N\n";
// cin>>n;
// int i=0;
// int sum=0;
// while(i<=n){
//     if(i%2==0){
//         sum=sum+i;
//     }
//     i=i+1;
// }
// cout<<sum<<endl;
    

// WAP TO PRINT THE GIVEN NO. IS PRIME OR NOT*******************

cout<<"ENTER THE VALUE OF N\n";
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
    cout<<" not prime no. for:-"<<i<<endl;
    }
    else{
        cout<<" prime no. for:-"<<i<<endl;
    }
  i++;
}

return 0;
}
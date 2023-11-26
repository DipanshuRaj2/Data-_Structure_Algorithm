// #include<bits/stdc++.h>
// using namespace std;

// //0-> Not a prime no.
// //1-> prime no.

// bool isprime (int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int m;
//     cin>>m;
//     if (isprime(m)){

//         cout << " is a Prime number\n";
//     }
//     else{

//         cout << "Not a prime no.\n";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int series(int n ,int x){
    int first=0; int second=1;
    int temp;
    for(int i=1; i<=n; i++){
        // cout<<first;
        temp=first+second;
        if(x==i){
         cout<<first<<" ";
         continue;
        }
       first=second;
       second=temp; 
    }
    return 0;
}
int main(){
    int n ,x;
    cout<<"Enter the length of series\n";
    cin>>n;
    cout<<"Choose random no. what is the no:-\n";
    cin>>x;
    series(n,x);
}
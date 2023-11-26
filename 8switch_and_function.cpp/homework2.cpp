//Wap to print the no. (3*n+7) by using user input;
// #include<bits/stdc++.h>
// using namespace std;
// int abde(int a){

//     int ap=(3*a)+7;
//  return ap;
// }
// int main(){
//     int m ;
//     cin>>m;
//     cout<<abde(m);
    
// }

// #include<bits/stdc++.h>
// using namespace std;

// int power(int a , int b){
//     int ans=1;
//     for(int i=1; i<=b ; i++){
//          ans=ans*a;
//     }
//     return ans;
// } 
// int main(){
//     int a, b;
//     cin>>a >>b;
//     int answer =power(a,b);
//     cout<<answer;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int count(int n){   
//     for(int i=1; i<=n; i++){
//         cout << i;
//     }
// }
// int main(){
//     int n;
//     cin>>n;

//     count(n); // function call 
    

// }

// #include<bits/stdc++.h> 
// using namespace std;
// int prime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(prime(n)  ){
//         cout<<"not prime no";
//     }
//     else{
//         cout<<"prime no";
//     }
// }
// print a fibbonaci number by using user input ***********
// Q) Fibonacci series question 
//you must enter two parameters i.e n,x
//n for the length u want to specify for series
//x for returning the answer at x place in series

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




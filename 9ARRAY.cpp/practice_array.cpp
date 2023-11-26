// #include<bits/stdc++.h>
// using namespace std;
// int maxi(int arr[] , int n){
//     int max = INT_MIN;
//     for(int i = 0; i<n; i++){

//         if(arr[i] > max){

//            max = arr[i];
//         }
//     }
//     return max;


// }
// int mini(int arr[] , int n){
//     int min = INT_MAX;

//     for(int i = 0; i<n; i++){
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int n , i;
//     cin >>n;
//     int arr[n];

//     for(i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     cout<<"Maximum no. is :- "<<maxi(arr, n);
//     cout <<"Minimum no. is :-"<<mini(arr, n);
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    // int n ;
    // cin >>n;
    int arr[4]={12,32,43,54};
    
   for(int i = 0; i<4; i++){
    cout <<arr[i]<<" ";
   }
cout <<endl;
    for(int i = 4-1; i>=0; i--)
    cout<<arr[i] <<" ";
    

}
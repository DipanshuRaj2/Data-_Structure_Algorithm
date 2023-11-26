#include<iostream>
using namespace std;
int main(){
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int space=n-row;
//     while(space){       //print karo space first triangle
//         cout<<" ";
//         space=space-1;  
//     }
//     int col=1;
//     while(col<=row){
//         cout<<col;      // print 2 triangle
//         col++;
//     }
//      int start =row -1;
//         while(start){
//             cout<<start;  // print 3 triangle
//             start=start-1;
//         }

//     cout<<endl;
//     row++;
// }
int n;
cin>>n;
int row=1;
while(row<=n){
    int col=n+row-1;
    while(col){
        cout<<col;
        col=col-1;
    }
    cout<<endl;
    row++;
    
}
    return 0;
}
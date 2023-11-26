#include<iostream>
using namespace std;
int main(){
    // int arr[12] ={1,2,3,4,5,5,6 ,6,76};
    // cout << arr[5] << endl;
    int arr[100];
    int n ;
    cin >> n;

    for(int i = 0; i <= n; i++)
      cin >> arr[i] ;
    for(int i = 0; i<= n; i++)
        cout <<arr[i] <<" ";


    
}

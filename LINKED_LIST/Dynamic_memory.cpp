#include<iostream>
using namespace std;

int getSum(int arr[] , int n) {

    int sum  = 0;
    for(int i = 0 ; i<n; i++) {
        sum = sum + arr[i]; // sum+ = arr[i];
    }
    return sum;
}



int main(){
/*
    char ch = 'q';

    cout << sizeof(ch) << endl; //1

    char* c = &ch;
    cout <<sizeof(c) <<endl; // 4 (32 bit = 4byte , 64 bit = 8 byte)
    //so we consider 8 bit, total 9 byte storage in Dynamic memory.

*/

    int n;

    cin >> n;

 //variable size array
    int* arr = new int[n]; //declaration of array in dynamically
   
   //taking input from the user
   for(int i = 0; i <n; i++){
    cin >> arr[i];
   }
   
   int ans = getSum(arr , n);

   cout <<"answer is " << ans <<endl;
    return 0;
}
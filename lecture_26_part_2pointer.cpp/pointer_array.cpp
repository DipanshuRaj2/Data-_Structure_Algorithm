#include<bits/stdc++.h>
using namespace std;
int main(){

   /*

   int arr[10] ={2,5,6};

   cout <<" address of first memory block is :" << arr + 1 << endl;
   cout << arr[0]  << endl;
   cout <<" address of first memory block is :" << &arr[0] << endl;
   cout <<" 1th :" << *(arr) << endl;

// Arithmetic operation with array first element
   cout <<" 2th :" << *arr+ 1 << endl;
   cout << "3th " << *(arr) + 1 << endl;

// next array Element print 
   cout << "4th " << *(arr + 1) << endl;
   cout << "5th " << arr[1] << endl;

// Another way of accessing the array
   cout << 2[arr] << endl;
   cout << *(1 + arr) << endl;
    return 0;

    */

/*
   int temp[10];

   cout << sizeof(temp) << endl;
   cout <<" 1st :" << sizeof(*temp) << endl;
   cout <<" 2nd :" << sizeof(&temp) << endl;

   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl; // compiler wrong size of ptr 8
   cout << sizeof(*ptr) << endl; 
   cout << sizeof(&ptr) << endl; // output 8

*/

  /*
// print the different address
   int a[20] ={1,2,3,4,5};

   cout <<"->" << &a[0] << endl;
  
  int *p = &a[0]; // two address are locate
  
  cout <<"->" << &p << endl;//print the address of p wala block 
  */

  int arr[10];

// ERROR

 // arr = arr + 1; // mapping is  done
// the address of arrays, that cannot be reassigned
  int *ptr = &arr[0];
  cout << ptr << endl;
  ptr = ptr + 1;
  cout << ptr << endl;

   return 0;
}
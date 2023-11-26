#include<bits/stdc++.h>
using namespace std;
int main(){
    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (* ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f  << " " <<p;

    // question 2;
    // int a =7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout << a << " "<<b<<endl;

// question 3;
  
//    int *ptr = 0;
//    int  a =10;
//    *ptr = a;
//    cout << *ptr <<endl;

//  question 5;

//   char ch = 'a';
//   char* ptr = &ch;
//   ch++;
//   cout << *ptr << endl;

// question 6;

// int a =7;
// int *c = &a;
// c = c+1;
// cout << a <<" " <<  *c << endl;

// questions

// int a[5];
// int *c;
// cout << sizeof(a) <<" " << sizeof(c);

//questions

// int a[] = {1,2,3,4};
// cout << *(a) << " " << *(a+2);

// questions

// int a[] = {1,2,3,4};
// int *p = a++;
// cout << *p << endl;

// questions

// int arr[] = {4,5,6,7};
// int *p = (arr +1);
// cout << *arr + 9;

// questions

// char s[] = "hello";
// char *p =s;
// cout << s[0] <<" " << p[0];

// questions

// char arr[20];
// int i;
// for(i =0; i < 10; i++){
//     *(arr + i) = 65 + i;
// }
// *(arr + i) ='\0';
// cout << arr;

//questions

// char *ptr;
// char str[] = "abcdefg";
// ptr = str;
// ptr +=5;
// cout << ptr;

//questions
//  char st[] = "ABCD";
//  for(int i = 0; st[i] !='\0'; i++){
//     cout << st[i] << *(st)+i <<*(i+st) <<i[st];
//  }

// questions

float arr[5] = {12.5 ,10.0, 13.5, 90.5, 0.5};
float *ptr1 = &arr[0];
float *ptr2 =  ptr1 + 3;
cout<<*ptr2<<" ";
cout<<ptr2 -ptr1;
    return 0;
}
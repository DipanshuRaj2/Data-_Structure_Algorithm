#include<iostream>
using namespace std;

int main() {
/*
    int a = 4;
    int b = 6;

    cout <<"a&b:- " << (a&b) << endl; //and operator
    cout <<"a|b:- " << (a|b) << endl; //or operator
    cout <<"~a:- " << ~a << endl;  // not opertor
    cout <<"a^b:- "<< (a^b) << endl; //xor gate
    cout << (17>>1)<< endl; //right shift (divide by 2)
    cout << (17>>2)<< endl; //right shift(divide by 2 again 2)
    cout << (19<<1)<< endl; // left shift(multiply by 2)
    cout <<(19<<2)<< endl; // left shift(multiply by 2*2)
    
    int i =7;

    cout << (++i) << endl; // 8
    cout << (i++) << endl; //8 , i = 9
    cout << (i--) << endl; // 9 , i = 8 
    cout << (--i) << endl; // 7
    */
   // cout << "Homework Questions :- ";
/*
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2){
        cout << "Stage1 - Inside If ";
    } else{
    cout <<"stage2 -Inside else ";
    }
    cout << a <<" "<< b << endl;
*/
   /*
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b ;
    cout << c ;
*/
//sum of natural no.
/*
  int n ;
  cout <<"Enter the value of n:- ";
  cin >> n;

  int sum = 0;  
  for(int i = 1; i<=n; i++){
    sum = sum + i;
  }
 cout << sum;

}
*/
/*
int n = 10;
int a = 0;
int b = 1;

cout << a <<" "<< b <<" ";

for(int i = 1; i< 10; i++)
{

    int next_no = a + b;
    cout << next_no <<" ";
     
     a = b;
     b = next_no;
}

*/

//print prime no.

int n ;
cout <<"Enter the value of n" <<endl;
cin >> n;

bool isprime = 1;

for(int i = 2; i <n ; i++){

    //rem = 0 , Not a Prime 
    if(n % i == 0) {
        //cout <<"Not a Prime Number" << endl;
        isprime = 0;
        break;
    }
}
    if(isprime == 0) {
        cout <<"Not a prime Number" << endl;
    }
    else
    {
        cout <<"Is a prime Number" << endl;
    }

}


/*
for(int i = 0 ; i < 5 ; i++){
    cout << "HI" << endl;
    cout <<"Hello"<< endl;
    cout <<"Reply toh karde"<< endl;
    continue;
    cout << "Bye Bye tata ";
}

*/
//home work question
// for(int i = 0 ; i<=5; i++) {
//     cout << i << " ";
//     i++;
// }

// for(int i = 0; i<=5; i--){
//     cout << i << " ";
//     i++;
// }

// for(int i = 0; i<= 15; i+=2) {
//     cout << i <<" ";

//     // if (i & 1 ){
//     //     continue;
//     // }
//     i++;
// }

// for(int i= 0;i<5;i++){
//     for(int j = i; j<=5; j++) {
//         if(i+j == 10){
//             break;
//         }
//         cout << i << " " << j << endl;
//     }
// }

// wap to take as user input then add the all digit place and multiply the digit
 // place then subtract it.

// int n;
// cout << "enter the digit:- ";
// cin >> n ;
// int prod = 1;
// int sum = 0;
//  while( n!= 0){
//     int digit = n % 10;
//     prod = prod * digit;
//     sum = sum + digit;

//     n = n/10;
// }
// int answer = prod - sum;
// cout << answer;



























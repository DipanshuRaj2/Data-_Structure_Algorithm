#include<iostream>
using namespace std;

struct abc {
    int a;
    char b;
};
int main(){
//     // pointer to struct
//     // how to access the pointer from the above the int main

//  abc obj;  

//  abc *ptr;

//  cout <<sizeof(ptr)<<endl; //4

//  ptr = &obj;

//  cout << "address of ptr :" <<ptr;  //address 


//  cout << endl <<endl << endl << endl;




//  //single pointer

// int a;
// int *add = &a;

// cout <<*add <<endl;   //6422356

// cout <<add <<endl;  //0x61ff08

// cout <<&a;  //0x61ff08



// Double pointer
// int a ;

// int *add = &a;

// cout << add <<endl; //0x61ff08 it store the address of 'a'  

// int **ptr = &add;

// cout << ptr <<endl ; //0x61ff04  it store the address of add;




// //Triple  pointer 
// int ***rtr =  &ptr;

// cout << rtr << endl; //0x61ff00 it store the address of ptr;

// //before it store the address of add '0x61ff04';

// //before it store the of a '0x61ff08';

// cout << endl << endl << endl << endl << endl;




//Dereferencing pointers

// int a = 9;

// int *add = &a;

// cout <<"print the value with address of 'a' :- "<< *add <<endl; //9

// cout << endl <<endl;

// // How to change the value of a = 9 (which is previous declare);

// *add = 88;

// cout <<"value of 'a' change :"<< a; // 88

cout <<endl <<endl;




//character array  with pointer
// char a = 'a';

// char *add = &a;

// cout <<"value with 'a' :-"<<*add; //print with address;



//pointer Arithmetic

int a;

int *ptr = &a;

cout <<"Address of ptr :" <<ptr <<endl <<endl <<endl; //0x61ff08
cout <<"Value of Address 4 bit Forward is :"<<ptr + 1 <<endl; //0x61ff0c

return 0;

}
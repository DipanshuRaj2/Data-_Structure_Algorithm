#include<iostream>
using namespace std;
#include "Student2.cpp"
int main(){
    Student2 s1(10 , 1234);  //this : 0x61ff08 // contructor 3 called !
    cout << "s1 : "; //s1 : 10 1234
    s1.display(); 
   
    Student2 s2(s1); 
    cout << "s2 : ";
    s2.display();
   

    //dynamically
    Student2 *s3 = new Student2(20 , 2001);
    cout <<"s3 : ";
    s3 ->display();

    Student2 s4(*s3);

    Student2 *s5 = new Student2(*s3);
    Student2 *s6 = new Student2(s1);
    
    Student2 s9;
    Student2 s7 (23, 10987);
    Student2 s8(s9);





} 
#include<iostream>
using namespace std;
#include"Student2.cpp"
int main(){
    // Student2 s1;

    // s1.display();

    // Student2 s2;

    // Student2 *s3 = new Student2; //dynamically
    // s3 ->display();
    // (*s3).display(); 
  //both upper line are Same; 
/*
  cout <<"Parameterized constructor Demo" << endl;

  Student2 s4(10);
  
  s4.display();

  Student2 s5(56, 234); 
  s5.display();
  //Dynamically 

  Student2 *s6 = new Student2(101); 

  Student2 *s7 = new Student2(23 ,234);

  s6->display();

  s7->display(); 
   
  */
 Student2 s1(23, 45); //this : 0x61ff08contructor 3 called ! 
 cout << endl;
 cout <<"Address of s1 "<<&s1<<endl; //Address of  s1 0x61ff08
 
 Student2 s2(10);
 s2.display();

}
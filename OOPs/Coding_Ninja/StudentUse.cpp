#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){
    //create object Statically
    Student s1;
    Student s2;
    Student s3, s4, s5;

    s1.rollNumber = 20;
    // s2.age = 12;
    cout <<"s1 rollNumber : " <<s1.rollNumber<<endl;
    cout <<"s2 age : "<<s2.getAge() <<endl;

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;

    
    //Create object Dynamically

    Student *s6 = new Student;
    // (*s6).age = 30;
    (*s6).rollNumber = 104;
    cout << endl;
    (*s6).display();
    cout << endl ;

    cout <<"s6 age : " << s6 -> getAge() <<endl; 
    // s6-> age =23;
    s6->rollNumber= 104;
    // cout <<s6->age<<endl;
    cout <<s6->rollNumber; 
    s6->display(); 
    
} 
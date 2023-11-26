 #include<iostream>
 using namespace std;
 #include "Student2.cpp"

 int main(){
    //create object statically 
    Student2 s1;
    Student2 s2;
    Student2 s3 , s4 , s5;

    // s1.age = 24;
    s1.rollNumber = 101;

    cout <<"s1 age : " <<s1.getAge() <<endl;
    cout <<"s1 Roll number : "<<s1.rollNumber << endl;

    s1.display();
    s2.display(); 
    
    // s2.age = 30;
    cout <<endl<<endl;
    //Create objects dynamically 
    Student2 *s6 = new Student2;
    // (*s6).age = 23;
    (*s6).rollNumber = 104;

    (*s6).display();
    
    cout <<"s6 age :" <<s6 ->getAge()<<endl;

 }

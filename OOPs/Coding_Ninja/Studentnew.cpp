//getter function = read the value of Private class
//setter function  = we use to change the value ,edit, update of private class;
#include<iostream>
using namespace std;
#include"Student2.cpp"
int main() {
    Student2 s1; //create template static

    Student2 *s2 = new Student2; //create template dynamically
    
    s1.setAge(20);
    s2 -> setAge(24);

    s1.display();
    s2 ->display();    
     
}      
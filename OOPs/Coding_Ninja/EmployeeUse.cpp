#include<iostream>
using namespace std;
#include "Employee.cpp"
int main(){
    Employee e1; //Contructor Called !

    e1.id = '0';

    // to use the Private class
    e1.setAge(23);
    e1.display(); //age = 23 id = 0

    Employee e2; //Contructor Called !
    e2.display(); //age = 6422476 id =
    
    cout << "Dynamically " << endl;
    Employee *e3 = new Employee; //Contructor Called !
    (*e3).display(); //age = 8913088 id =
    e3->display(); //age = 8913088 id =
///////////////////////////////////
    cout << endl;

    cout << "Parameterized Contructor " << endl;
    Employee e4(34);//Only 1 parameter passed
    e4.display(); //age = 34 id = á
 

    Employee e5(54, 'p'); //Two Parameter passed
    e5.display(); //age = 54 id = p

    cout << endl;
    cout << "Dynamically : " << endl; 
    Employee *e6 = new Employee(67 ); //Only 1 parameter passed
   
    //(*e6).display(); 
    e6->display();  //age = 67 id =
  
    cout << endl;

    //////////////////////////////check the address 
    Employee e10(12 ,'p');
    cout <<"Address of e2" << &e10<<endl;



 
 

}
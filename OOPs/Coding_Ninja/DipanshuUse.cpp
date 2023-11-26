#include<bits/stdc++.h>
using namespace std;
#include "Dipanshu.cpp"
int main(){
    Dipanshu d1 , d3;

    Dipanshu *d2 = new Dipanshu;
    d1.setAge(21);
    d1.setSalary(100000);

    d2 ->setAge(18);
    d2 ->setSalary(60000);
    
    d1.Display();
    d2->Display();

    cout << endl << endl << endl;
    

    d3.name=89;
    cout <<d3.name<<endl;

   Dipanshu d5(6);
    d5.Display();


    // (*d2).Display();

    //Note : It is not necessary that if we access the private class that use get and set keyword.
    // it totally Depends to the user which type of name is used.
   

}

#include<iostream>
using namespace std;
//hero type ki ek class ban chuki hain
class Hero {  //by default if any class is made it's always be private.
    
    //properties  (if there no any properties in the class then the class is called "Empty Class " ;
    
    public:
    int health;

    
    char level;
    
    void print (){
        cout << level << endl;
    }
};


int main(){

    //creation of object
    Hero ramesh;

    //cout <<"Size : " <<sizeof(ramesh) << endl; 
    //Empty class ke liye
    //output 1 (because to keep the track or Identification)

    //Access of data by using .
    ramesh.health = 70;
    ramesh.level ='A';
    cout <<"Health is :"<<ramesh.health <<endl;
     cout <<"level is :"<<ramesh.level <<endl;
    return 0;
}
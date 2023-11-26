#include<iostream>
using namespace std;

class Hero {
    
    //properties
    private:
    int health;

    public:
    char level;

    // void print (){
    //     cout <<level << endl;
    // }

    int getHealth(){    //this is used to access the private class in the function.
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h ){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    //creation of object
    Hero ramesh;
      cout <<"Size of Ramesh is " <<sizeof(ramesh) <<endl;

    //use of getHealth in OOPs.
    
    cout <<"Ramesh health is " <<ramesh.getHealth() <<endl;//getHealth is used to access the private class in the main program
    //We create a function in the getHealth() on class hero.PLEASE SEE the code of class hero
    //ramesh.Health = 70;


   //Use setter
    ramesh.setHealth(70);// similar to set health;
    ramesh.level ='A';
    //set the condition such as set the password in the class specific class is used;

    cout <<"Health is: "<<ramesh.getHealth() <<endl;
    cout <<"Level is: "<<ramesh.level <<endl;
}

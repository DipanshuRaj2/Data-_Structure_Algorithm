#include<iostream>
using namespace std;

class Hero {
    //properties
    public:
    int health;
    
    char level;

    Hero(){
        cout <<"Constructor Called" << endl;
    }

};


int main(){

    cout <<"Hi " << endl;

    Hero ramesh;
    cout <<"hello " << endl;
    return 0;
}
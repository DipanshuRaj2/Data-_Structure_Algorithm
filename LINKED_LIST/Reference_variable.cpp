//Reference variable = Same memory different variable
//e.g My name is chittu and Dipanshu both.
//observe the code carefully
#include<iostream>
using namespace std;

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){
/*
    int i = 5;

    //create a ref variable

    int& j = i; 

    cout << i <<endl; //5

 //pointed with same variable ;

    cout << j <<endl;//5

    i++;
    cout << i <<endl;//6
    j++;
    cout << j <<endl;//7

    cout << i <<endl;//7 */


    int n = 5;

    cout <<"Before " << n << endl;

    update2(n);
    cout <<"After " << n << endl;



    return 0;
}
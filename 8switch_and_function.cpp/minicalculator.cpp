#include<iostream>
using namespace std;
int main(){
    int a ,b ;
    char op;

    cout<< " Enter the value of a \n";
    cin>>a;

    cout<<"Enter the value of b \n";
    cin>>b;

    cout<<"enter the operand\n";
    cin>>op;

    switch(op){
        case '+': cout<< a+b <<endl;
        break;

        case '-': cout<< a-b <<endl;
        break;

        case '*': cout<< a*b <<endl;
        break;

        case '%': cout<< a%b <<endl;
        break;

        case '/': cout<< a/b <<endl;
        break;

        default: cout<< "Please enter a valid opertion\n";
        


    }
    



}
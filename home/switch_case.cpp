#include<iostream>
using namespace std;
int main() {
    /*
    char ch = 'A' ;

    
    cout << endl;

    switch(ch ){

        case '1': cout <<"First"<< endl;  // float or string value not allow in the case
                                          //only int or float value allowed
            break;

        case 'A': cout<<"Second"<< endl;
           break;

        default: cout <<"It is default case "<<endl;


    }

    cout << endl;


*/
/*
int n = 1;
char ch = 'A';
while(n){

    switch(ch) {
        case 'A' :cout <<"Home work done :-" ;
            break;
            // exit();
    }
    exit(5);
}


// mini calculator
int a , b;

cout <<"Enter the value of a :- ";
cin >> a;

cout <<"Enter the value of n :- ";
cin >> b;

char op;
cout <<"Enter the Operation you want to perform :- ";
cin >> op;

switch( op ) {
    case '+': cout <<( a + b) << endl;
        break;

    case '-': cout <<( a - b) << endl;
        break;

    case '*': cout <<(a * b) << endl;
        break;

    case '/': cout <<(a / b) << endl;
        break;

    case '%': cout <<(a % b) << endl;
        break;

    default: cout <<"Please enter a valid Operation "<< endl;

}

*/
// how many number of certain notes;

 int amount ;

 int n1 , n20, n50, n100;

 n1 = n20 = n50 = n100 = 0;

 cout <<"Enter your total amount To find the Notes :";
 cin >> amount;

switch(amount >= 100){
    case 1: n100 =amount/100;
    amount =amount -(n100 * 100) ;
       break;
}
switch(amount >= 50){
    case 1: n50 = amount/50;
    amount =amount- (n50 * 50);
        break;
}
switch(amount >= 20){
    case 1: n20 = amount/20;
    amount =amount- (n20 * 20);
        break;
}
switch(amount >= 1){
    case 1: n1 = amount/1;
    amount = amount -(n1 * 1);
     break;
}

cout <<"100 = " <<n100 << endl;
cout <<"50 = " <<n50 << endl;
cout <<"20 = " <<n20 << endl;
cout <<"1 = " <<n1 << endl;







}
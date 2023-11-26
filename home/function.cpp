#include<iostream>
using namespace std;

// function
int power(int num1 , int num2){

    //cout << a << endl; wrong a is not accesible in the power function because it is not declare in it.
    //a is accessible in the main function only.

    int ans = 1;

    for(int i = 1; i <=num2; i++){
        ans = ans * num1;
    }

    return ans;

}

int main(){
    // power of a and b;
/*
 int a , b ;

 cin >> a  >> b;

 int answer = power(a,b);
 cout <<"answer is:- " << answer ;

  int c , d ;

 cin >> c  >> d;

 int answe = power(c,d);
 cout <<"answer is:- " << answe ;

 
 return 0;
 
 
 
int a , b;

cin >> a >> b;

int ans =power(a , b);
cout <<"answer is :- "<< ans << endl;

*/




return 0;
 
 
 
 
 
 
 
 

}
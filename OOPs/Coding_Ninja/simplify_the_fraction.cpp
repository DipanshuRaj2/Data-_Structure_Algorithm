#include<iostream>
using namespace std;

void simplify(int& numerator, int& denominator){
    int gcd = 1;
    int j = min(numerator, denominator);
    for(int i = 1; i <= j; i++){
        if(numerator % i == 0 && denominator % i == 0){
            gcd = i;
        }
    }
    numerator = numerator / gcd;
    denominator=denominator / gcd;
}

int main(){
    int num = 2;
    int den = 4;

    simplify(num, den);
    cout << num << "/" << den << endl;
    
    return 0;
}


    
    


#include<iostream>
using namespace std;

//function signature
void printCounting(int n) {
    //function body
    int i = 1;
    while(i <= n){
        cout << i <<" ";
        i++;
    }
    cout << endl;
   
}
int main(){
    int m ;

    cin >> m;

    //function call learn by heart ;
    printCounting(m);

    









    return 0;
}
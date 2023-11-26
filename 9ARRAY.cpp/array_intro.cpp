#include<bits/stdc++.h>
using namespace std; 
int main(){

    //declare
    int number[15];

    //Acessing in array
    cout << endl <<"Value at 0 Index:-" << number[0] << endl;

    // cout << endl <<"Value at 20 Index:-" << number[20] << endl;
    
    //Initialising an array
    int second[3] = {1,2,3};

    //Accesing in array 
    cout << endl <<"Value at 3 Index:-" << second[2] << endl;

    int third[15] = {12, 23 };
    
    int n=15;
    //Printing the array
    
    cout << "Printing the array " << endl;

    for(int i=0; i<n; i++)
    {
        cout << third[i] << " " ;
    }

    // int fourth[12]={12, 23, '/' ,'@' };
    // cout << endl << "Value of  Second is:- " << fourth[2] << endl;
    
    int fourth[10]={0};
 
    n =10;
    cout << "Printing the array " << endl;

    for(int i=0; i<n; i++)
    {
        cout << fourth[i] << " " ;
    }

    n=10;

    int fifth [10] = {1 , 1, 1 ,1,1,1,1,1,1,1};
        cout << "Printing the array " << endl;

    for(int i=0; i<n; i++)
    {
        cout << fifth[i] << " " ;
    }


    cout<< endl << "Everything is Fine " << endl << endl;

}
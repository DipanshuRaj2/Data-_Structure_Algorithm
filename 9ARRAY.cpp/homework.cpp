// print the sum of  array elements by using user input*********


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , sum=0;
    
    cout<<"enter the size of array "<<endl; 

    cin >> n;

    int arr[100]={};

    cout<<"enter the array elements"<<endl;

    for(int i=0; i<n; i++){

        cin >> arr[i];   //taking input in array*****

    }

    for(int i=0; i<n; i++){

        sum=sum+arr[i]; // doing sum of array elements

    }

    cout <<"SUM OF ARRAY ELEMENTS ARE:-"<<sum;
}
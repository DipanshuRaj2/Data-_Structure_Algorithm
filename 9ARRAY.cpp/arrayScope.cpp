#include<bits/stdc++.h>
using namespace std;
void update(int arr[], int n){

    cout<<endl <<"INSIDE THE FUNCTION"<<endl;
    
     //updating the array's first element
     //arr[1]=120;

    //printing the array
    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
    cout<<"\nGOING BACK TO THE FUNCTION "<< endl;
}

int main(){

    int arr[3] ={1,2,3} ;

    update(arr ,3);
    arr[0]=120;
    cout<<"PRINTING THE MAIN FUNCTION"<<endl;
    
    //printing the array
    for(int i=0; i<3; i++){

        cout<<arr[i]<<" ";

    }


}
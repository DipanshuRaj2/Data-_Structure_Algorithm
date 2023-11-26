#include<bits/stdc++.h>
using namespace std;

bool  search(int arr[], int size, int key) {

    for(int i=0; i<=size; i++){

        if(key==arr[i]){
            return 1;
        }

    }
     return 0;
 
}
int main() {
    int arr[10] = {5, 7, -2 ,10 ,22, -2, 0, 22, 1};

    cout <<"ENTER THE ELEMENTS TO SEARCH FOR "  <<endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);  // function call 

    if( found ){
        cout <<"key is present "<<endl;
    }
    else{
        cout <<"key is absent "<<endl;
    }

    return 0;

}

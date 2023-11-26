#include<bits/stdc++.h>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

    for(int i=0; i<n; i++){
        if(num[i] < min)
        {

            min = num[i];
        }
    }
    return min;

}
int getMax(int num[],int n){

    int max = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i] > max)
        {

            max = num[i];
            }
        }
        return max;
    }
    

int main(){
    int size;
    cout<<"enter the size of elements\n";
    cin>>size;

    int num[100];
    cout<<"Enter the array elements\n";
    
    for(int i=0; i<size; i++){

        cin>>num[i]; 

    }
    cout <<"MAXIMUM NUMBER IS\n"<< getMax(num ,size)<<endl;
    cout <<"MINIMUM VALUE IS \n"<< getMin(num ,size);

    return 0;
}
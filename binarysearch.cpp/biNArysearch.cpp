#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int size, int key){
    int start =0;
    int end =size-1;
    int mid = start +(end-start)/2;

    while(start<=end){

        if(arr[mid] == key){

            return mid;
        }
        if(key > arr[mid]) {

            start = mid+1;
        }
        else{

          end = mid - 1;

        }
        mid =start +(end-start)/2;
    }
    return -1;
}


int main(){
    int even[6]={2,3,5,7,8,9};
    int odd[5]={1,3,5,9,11};

    int evenindex = binarysearch(even ,6, 7);
    cout<<"Index of 7 is:-" << evenindex <<endl;

    int oddindex=   binarysearch(odd,5,11);
    cout<<"Index of 11 is:- " << oddindex <<endl;
} 
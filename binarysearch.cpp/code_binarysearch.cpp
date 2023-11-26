#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;

    int mid =(start +end)/2;

    while(start <= end) {

        if(arr[mid] == key) {
        return mid;

    }
    
    //go to right part 
    if(key > arr[mid]){
         
         start =mid+1;
         
    }
    //go to left part

    else{   //(key > arr[mid])
        end = mid-1;
    }
    
    mid =(start+end)/2;
    }
    return -1;
}
int main(){
    
    int even[6] = {2,4,6,8,10,12};
    int odd[5] ={3,8,11,14,10};

    int evenindex = binarysearch(even, 6, 123); //call function

    cout <<" Index of 123 is " << evenindex <<endl;

    int oddindex = binarysearch(odd, 5, 11);//call function   (name,size,key)
    cout <<" Index of 11 is " << oddindex <<endl;





}
//warning *********************

/*This code is suitable for vs code , dev c++, gdb compiler, but don't pass all test case in the hackerrank ,leet code, code studio
 not pass the test case because in this code range of int is exceed that is over flow .

int start =2^31-1(maximum range of integer)

int mid =2^31-1 (maximum range of integer)

int mid= (start+end)/2   so here start + end range se jyada ho gyan hain so isliye yeah use nahi karenge*/

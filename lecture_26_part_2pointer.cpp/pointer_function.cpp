#include<bits/stdc++.h>
using namespace std;
/*
void pointer(int *p){
    cout << *p << endl;
}*/
// void update (int *p){

//   // p = p + 1;
//    //cout <<" Inside :"<<p << endl;
//     *p =*p+1;  

int getSum(int arr[] , int n) {

    cout<<endl <<"Size :"<< sizeof(arr) << endl;
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    //cout << sum;
 return sum;
}

int main(){
  /*  int i =5;
    int *ptr = &i;
   // pointer(ptr);

   cout << " before :" << *ptr << endl;
   update(ptr);
   cout <<" After :" << *ptr << endl;
   */


   int arr[6] ={1,2,3,4,5,7};

   cout << "Sum is " << getSum(arr+3 , 3) << endl;
   

}



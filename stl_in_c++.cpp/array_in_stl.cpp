#include<iostream>
#include<array>

using namespace std;
int main(){
    int basic[3] ={1,2,3};
    
    array<int,4> a ={1,2,3,4};  // array in stl DON'T USE BECAUSE IT IS STATIC

    int size = a.size();

    for(int i=0; i<size; i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;

    cout<<"Element at 2nd Index-> "<<a.at(0)<<endl;
     // Value find direct 2nd index. by using "at" operation

    cout<<"Empty or not-> "<<a.empty()<<endl;     
    // bool return means 0 OR 1;

    cout<<"First Element-> "<<a.front()<<endl;
    //value find at First index directly by using "front" operation

    
    cout<<"last Element-> "<<a.back()<<endl;
    //value find at last index directly by using "back" operation
}

/*Containers Deque is used to Push and Pop operation in the beginning and last
it is dynamic. and it is possible for random access*/
#include<iostream>
#include<deque>

using namespace std;
int main(){

    deque<int> d; //deque is created
    d.push_back(1); // second elements in stack 
    d.push_front(2);//first elements in stack
    d.push_front(3);
    d.push_back(4);
    

    for(int i:d){ //print the elements in the stack
        cout<<i<<" ";

    }cout<<endl;
    d.pop_front(); //second (top elements)elements delete(1 is removed)
    for(int i:d){

        cout<<i<<" ";
    }

}

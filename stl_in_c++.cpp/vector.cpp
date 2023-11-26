/*Vector = vector is the dynamic array 
(Array is the contigous memory location)

what is the vector?
If the size of array is full and we want to add more  value 
(without changing in the size of array) ,
then the vector is used . 
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
 

    vector<int> a(5,1); // print the elements(5,1)(5=size)and (1 se intialize  kar rahe hain)
   
    cout<<"print a"<<endl;

    for (int i:a){
      
      cout<<i<<" ";

    }cout<<endl;

   vector<int>v; // int type vector created (starting size 0 Hota hain)
   cout<<"Capacity->"<<v.capacity()<<endl;// check the size of vector "v.capacity()"
   
   v.push_back(1);           // to store the value 
   cout<<"Capacity->"<<v.capacity()<<endl;

   v.push_back(2);
   cout<<"Capacity->"<<v.capacity()<<endl;
   
   v.push_back(3);
   cout<<"Capacity->"<<v.capacity()<<endl;
   cout<<"Size->"<<v.size()<<endl;

   //Similar to like an Array in Stl 
   cout<<"Elements at 2nd Index "<<v.at(2)<<endl;

   cout<<"Front "<<v.front()<<endl;
   cout<<"back "<<v.back()<<endl;
   
   cout<<"before pop"<<endl;
   for(int i:v){        // print the elements
    cout<<i<<" ";

   }cout<<endl;
 
    v.pop_back();

    cout<<"after pop"<<endl;
   for(int i:v){   //last elements is not printed

    cout<<i<<" ";

   }cout<<endl;
  
// To clear the vector size  will be 0 but capacity is constant

   cout<<"before clear size-> "<<v.size()<<endl;
   v.clear();
   cout<<"after clear size-> "<<v.size()<<endl;
}
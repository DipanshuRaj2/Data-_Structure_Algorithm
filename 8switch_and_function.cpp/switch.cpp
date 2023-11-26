#include<iostream>
using namespace std;
int main(){
    int num=1;
     char ch='1';
  

    cout<<endl;
    switch(ch) {
         case 1: cout <<"first\n";
          break;

         case '1':switch(num) {
            case 1:cout<<"value of num is " << num <<endl;


         }
         break;

         default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
}
#include<iostream>
using namespace std;
int main(){
    // int n=1 ,i=1;
    // int m=1;

    // while( i <= n){
    //     switch(m){
    //         case  1: cout<<" 👌👌👌👌";
    //         break;
    //     }
    //     cout<<"hello world\n";
    //     exit();

    //  int n=1;
    //  char ch ='a';
    
    //  switch( ch ){
    //     case 1:cout<<"first\n";
    //     break;
    //     case 'a' :cout<<"character type\n";
    //     for(int i=1;  i<=4; i++ ){
    //         if(i==2){
    //             cout<<"🤷‍♀️🤷‍♀️🤷‍♀️😴";
    //         }
    //         continue;

    //     }
    //  } 


    // Find the no. of notes in 1330 amount i.e(no. of 100 notes , 50 notes , 20 notes, 10 notes)
    int amount;
    
    int n1, n10, n20, n50, n100 ,n500;
    n1=n20=n50=n100=n500=0;
    cin>>amount;
    switch(amount>=500){
case 1: 
        n500=amount/500;
        amount=amount- (n500*500);
        break;
    }
switch(amount>=100){
      case 1: 
        n100=amount/100;
        amount=amount-(n100 * 100);
        break;

    }
    switch(amount>=50){
    case 1:
       
        n50=amount/50;
        amount=amount-(n50*50);
        break;
    }
    switch(amount>=20){
    case 1: 
        n20=amount/20;
        amount=amount-(n20*20);
        break;
    }
    switch(amount>=10){
    case 1:
        n10=amount/10
        amount=amount-(n10*10);
        break;
    }
    switch(amount>=10){
    case 1:
        n1=amount/1;
        amount=amount-(n1*1);
        break;
    }
    cout<<"500 = "<<n500<<endl;
    cout<<"100 = "<<100<<endl;
    cout<<" 50 = "<<n50<<endl;
    cout<<" 20 = "<<n20<<endl;
    cout<<" 10 ="<<n10<<endl;
    cout<<" 1= "<<n1<<endl;

    }

#include<iostream>
using namespace std;
int main(){
    //int n;
    //WAP TO PATTERN QUESTION *** PRINT THIS TYPE??
                    //        *** 
                    //        ***
    // cin>>n;         
    // int i=1;
    // while(i<=n){//ROW KE LIYE CHALEGA
    //     int j=1;
    //     while(j<=n){//COLUMN KE KIYE CHALEGA
    //         cout<<" * ";
    //         j++;
        
    //     }
    //     cout<<endl;
    //     i++;

    // }
 
// WAP TO PRINT THIS TYPE // 1 1 1
                       //    2 2 2
                         //  3 3 3
//  cout<<"enter the value of n\n";                        
//  cin>>n;                        
//  int i=1;

//  while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//  }


//WAP TO PRINT LIKE THIS 1 2 3 4
                    //   1 2 3 4
                    //   1 2 3 4
                    //   1 2 3 4
// int n; 
// cout<<"enter the value of n\n" ; 
// cin>>n;  
// int i=1; 
// while (i<=n)   {
//     int j=1;
//     while(j<=n){
//         cout<< j<<" ";
        
//         j++;

//     }
//     cout<<endl;
//     i++;
// }
//WAP TO PRINT LIKE THIS 4 3 2 1
                   //    4 3 2 1
                   //    4 3 2 1  
                   //    4 3 2 1 
// int n;
// cout<<"enter the value of n\n";
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// int n;
// cout<<"enter the value of n\n";
// cin>>n;
// int count =1;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<count <<" ";
//         count= count+1;

//         j++;
//     }
//     cout<<endl;
//     i++;
// }  
// WAP TO PRINT   * 
        //        * *
         //       * * *
         //       * * * *
// int n;
// cin>>n;
// int row =1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<" * "<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// WAP TO 1
    //    1 2
    //    1 2 3
    //    1 2 3 4
// int n;
// cin>>n;
// int row =1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<col<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
// WAP TO PRINT LIKE THIS 1
         //               2 3 
         //               4 5 6
        //                7 8 9 10
        
// int n;
// cin>>n;
// int row=1;
// int count=1;
// while(row<=n){
//     int col=1;
//     while (col<=row){
//         cout<<count<<" ";
//         count=count+1;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
//WAP TO PRINT LIKE THIS 1
                 //      2 3
                 //      3 4 5                                   
                 //      4 5 6 7                  
                     
// int n;
// cin>>n;
// int row =1;
// while(row<=n){
//     int col =1 ;
//     int value= row;
//     while(col<=row){
//         cout<<value<<" ";
//         value=value+1;
//         col++;
//     }
//     cout<<endl;
//     row++;
// } 

// WAP TO PRINT LIKE THIS 1
           //             2 1
           //             3 2 1
           //             4 3 2 1
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<row-col+1<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;

// }
//WAP TO PRINT LIKE
//                 A A A A 
//                 B B B B
//                 C C C C 
//                 D D D D 
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=n){
//         char ch ='A'+row-1;
//         cout<<ch<<" ";
//         col++;

//     }
//     cout<<endl;
//     row++;
// }
//WAP TO PRINT LIKE
 //             A B C D
 //             A B C D
 //             A B C D
 //             A B C D
//  int n;
//  cin>>n;
//  int row =1;
//  while(row<=n){
//     int col=1;
//     while(col<=n){
//         char ch='A'+col-1;
//         cout<<ch<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;
 }
// WAP TO PRINT LIKE THIS
//                       A B C D 
//                       E F G H
//                       I J K L
//                       M N O P
//WAP TO PRINT LIKE THIS 
//                         A B C D 
//                         E F G H
//                         I J K L
//                         M N O P
int n;
cin >> n;
int row=1;
char ch='A';
while(row<=n){
    int col=1;
    while(col<=n){
        cout<<ch<<" ";
        ch=ch+1;
        col++;

    }
    cout<<endl;
    row++;
}
// WAP TO PRINT LIKE THIS 
//                      A B C D
//                      B C D E
//                      C D E F
//                      D E F G
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=n){
//         char ch='A'+row+col-2;
//         cout<<ch<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;
// } 
//WAP TO PRINT LIKE THIS A
                     //  B B
                     //  C C C
                     //  D D D D
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=row){
//         char ch='A'+row-1;
//         cout<<ch<<" ";
//         col++;
//     }
// cout<<endl;
// row++;
// }
//WAP TO PRINT LIKE      *
            //         * *   
//                   * * *
                // * * * *
// int n;
// cin>>n;
// int row=1;
// while(row<=n){    // row ke liye
//     int space= n-row;
//     while(space){   // space banaye hain
//         cout<<" ";
//         space=space-1;
//     }
//     int col=1;
//     while(col<=row){   // col ke liye
//         cout<<"*";
//         col++;
//     }
//     cout<<endl;
//     row++;
//}
 // WAP TO PRINT LIKE THIS  * * * *                        
//                          * * *
//                          * * 
//                          *
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     while(col<=n-row+1){
//         cout<<"*"<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;
// }  
//WAP TO PRINT LIKE THIS * * * *
//                         * * *
//                           * *
//                             *  
// int n ;
// cin>>n;
// int row=1;
// while(row<=n){
//     int space=row-1;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     int col=1;    
//     while(col<=n-row+1){
//         cout<<"*"<<" ";
//         col++;
//     }
//    cout<<endl;
//    row++;  
//}
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int space=row-1;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     int col=1;
//     int value=1;
//     while(col<=row){
//         cout<<value;
//         value=value+1;
//         col++;
//     }
//     cout<<endl;
//     row++;
// }
 return 0; 
}
                 
                   
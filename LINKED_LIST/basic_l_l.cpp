//lecture 2
/*Use of linked list

1. Stacks and queues
2.Image Gallery
3.Music Player
4.Browser
5.Hash Map and Hash set
*/

//lecture 3
/*Representation of linked list
How to create a node ?
struct Node 
{
    int val;
    node *next;

}

*/

//lecture 4 
/*Traversing A single Linked List
Traversing a single linked list means visiting each node of a single linked list until the end node is reached.

*/

//creation of linked list

// #include<bits/stdc++.h>
// using namespace std;

// class Node {  //struct main by default public hota hain; //class main by default private hota hain
//     public:
//     int data;
//     Node* next;    
// };
// int main(){
//     Node* head = new Node();
//     Node* second = new Node();
//     Node* third = new Node();

//     head->data = 1;
//     head->next = second;
//     cout <<head->data <<"->";

//     second->data = 2;
//     head->next = third;
//     cout<<second ->data <<"->";

//     third->data = 3;
//     head->next = NULL;
//     cout<<third->data <<" ";

//     return 0;
// }
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void 
int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 1;
    cout <<head->data<<"->";

    second->data = 2;
    cout <<second->data<<"->";


    third->data = 3;
    cout<<third->data;"->";




    cout <<"Jai Shree Ram";
}
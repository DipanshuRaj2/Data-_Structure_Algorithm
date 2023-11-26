// #include<iostream>
// using namespace std;

// // creating a node class
// class Node{

//     public:
//     int data;
//     Node* next;

//  // constructor
//     Node(int data) {
//         this -> data = data;
//         this -> next = NULL;
//     }

// };

// int main(){

//     Node* node1 = new Node(10);  //creating a heap
//     // created a new node
//     //constructor is called

//     cout << node1 -> data << endl; //0  //data print
//     cout << node1 -> next << endl; // 0  // data print next

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:

//     int data;
//     node*  next;

// };
// int main(){
//     node* head = new node();
//     node* second = new node();
//     node* third = new node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;

//     //creation of linked list

//     return 0;
// }

// creation of linked list.
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 1;
    head->next = second;
    // cout <<head->data;

    second->data = 2;
    second->next = third;
    // cout << second->data;

    third->data = 3;
    second->next = NULL;
    // cout <<third->data;
    return 0;
}
// why we use -> in linked list ?

/*(*p).i = 2;
or

p->i = 2;*/
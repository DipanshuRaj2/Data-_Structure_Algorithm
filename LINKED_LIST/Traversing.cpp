//In this programm we have only one address given and traverse the entire Linked list



// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
// };

// void  printList(node* head)
// {
//     node* temp = head;    //creating a temp variable with node*
//     while(temp != NULL) {
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     node* head = new node();
//     node* second = new node();
//     node* third = new node();
//     node* fourth = new node();

//     head->data = 1;
//     head->next = second;
  


//     second->data = 2;
//     second->next = third;
   

//     third->data = 3;
//     third->next = fourth;
   

//     fourth->data = 4;
//     fourth->next = NULL;
   
//     printList(head);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void printList(node* head){
    node* temp = head;
    while(temp != NULL){
        cout <<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();
    
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third-> next= NULL;

    printList(head);
    return 0;

}

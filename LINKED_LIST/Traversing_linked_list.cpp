// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
// };
// void traversing(node *head){
//     node* temp = head;
//     while(temp != NULL){
//         cout <<temp->data<<" ";
//         temp=temp->next;
//     }
// }

// int main(){
//     node *head = new node();
//     node *second = new node();
//     node *third = new node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;
    
//     traversing(head);

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
    
// };
// int main(){

//     node* head = new node();
//     node* second = new node();
//     node* third = new node();

//     (*head).data = 1; //head->data= 1
//     head->next = second;
//     cout <<head->data<<" ";

//     second->data = 2;
//     second->next = third;
//     cout <<second->data<<" ";


//     third->data = 3;
//     third->next = NULL;
//     cout<<third->data<<" ";
//     return 0;

/*-> is structure dereference operator

After execution of above statements

a) start pointer will points to the direct next node of itself.

b) start's previous pointer will be assigned to NULL (indicating end of list)*/

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
// };
// void traversing(node *head){
//     node *temp = head;
//     while(temp != NULL){
//        cout<<temp->data<<" ";
//        temp=temp->next;
//     }
// }
// int main(){
//     node *head = new node();
//     node *second = new node();
//     node *third = new node();

//     head->data=1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = NULL;
    
//     traversing(head);

//     return 0;
// }
//traversing linked list
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void print(node)
int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();
    
    head->data = 1;
    
    second->data = 2;
    third->data = 3;



}
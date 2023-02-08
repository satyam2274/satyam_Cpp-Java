#include <iostream>
using namespace std;
/*
input :   
5
1 2 3 4 5
1
output :
1 1 2 3 4 5
*/

struct node{
    int data;
    node* next;
    // constructor
    node(int val){
        data = val;
        next = NULL;
    }
};
// create a node
node* Create(int n){
    node* head = NULL;
    node* last = NULL;
    for(int i=0; i<n ;i++){
        int x;
        cin >> x;
        node* temp = new node(x);
        if(head==NULL and last==NULL){
            head = temp;
            last = temp;
        }else{
            last->next = temp;
            last = temp;
        }
    }
    return head;
}
node* insertAtFront(node* head){
    int val;
    cin >> val;
    node* temp = new node(val);
    temp->next = head;
    return temp;
}
// print linkedlist
void PrintLinkedlist(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    int n;
    cin>>n;
    node* head = Create(n);
    head =  insertAtFront(head);
    PrintLinkedlist(head);
    
}

#include <iostream>
using namespace std;
/*
input :   
5
1 2 3 4 5
output :
 1 2 3 4 
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

node* DeleteAtEnd(node* head){
    if(head->next == NULL){
        return NULL;
    }
        node* last = head;
        while(last->next->next != NULL){
            last = last->next;
        }
        last->next = NULL;
    return head;
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
    head =  DeleteAtEnd(head);
    PrintLinkedlist(head);
    
}

#include <iostream>
using namespace std;
/*
input :   
5
1 2 3 4 5
output :
  3  
  input : 
  6
  1 2 3 4 5 6
  output : 4
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
int Middle(node* head){
    node* slow = head;
    node* fast = head;\
    while(fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
    cout<< Middle(head)<<endl;
    // PrintLinkedlist(head);
    
}

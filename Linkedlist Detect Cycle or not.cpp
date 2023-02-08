#include <iostream>
using namespace std;
/*
input :   
5
1 2 3 4 5
output :
  false 
  input : 
  6
  1 2 3 4 3 4
  output : true
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
bool CycleExist(node* head){
    node* fast = head;
    node* slow = head;
    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
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
    cout << CycleExist(head)<<endl;
    
}

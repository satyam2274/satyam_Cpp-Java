#include <iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node(int val){
        data = val;
        next  = NULL;
    }
};

int main() {
    node *head = new node(5);
    head->next = new node(6);
    head->next->next = new node(7);
    node *temp = head;
    //  Isse hame haed ka dena nahi milega 

    // while(head!=NULL){
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    // head ka data safe rahega 
    cout<<head->data;
}

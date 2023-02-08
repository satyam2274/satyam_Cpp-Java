#include <iostream>
using namespace std;
/*
input : 5
1 2 3 4 5
outtput:
1 2 3 4 5
*/
struct node{
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

int main() {
    int n;
    cin >> n;
    node* head = NULL;
    node* last = NULL;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        node* temp = new node(x);
        if(head==NULL and last==NULL){
            head = temp;
            last = temp;
        }else{
            last->next = temp;
            last = temp;
        }
    }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;
}

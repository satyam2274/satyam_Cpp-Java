#include<bits/stdc++.h>
using namespace std;
/*
input : 2 3 9 -1 -1 -1 4 5 7 -1 -1 8 -1 -1 6 -1 -1
output :
2 
3 4 
9 5 6
7 8
*/
class node{
public:
    int data;
    node* left;
    node* right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* BuildTree(){

    int x;
    cin >> x;

    if (x == -1){
        return NULL;
    }

    node* root = new node(x);

    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

void LevelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);

    while (q.size() > 0){
        int n = q.size(); // is level par kitni nodes present hai
        while (n--){
            node* curr = q.front();
            cout << curr->data << " ";

            if (curr->left != NULL){
                q.push(curr->left);
            }
            if (curr->right != NULL){
                q.push(curr->right);
            }
            q.pop();
        }
        cout << endl;
    }
}

int main(){
    node* root = BuildTree();
    LevelOrderTraversal(root);
    return 0;
}

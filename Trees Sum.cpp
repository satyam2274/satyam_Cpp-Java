#include<bits/stdc++.h>
using namespace std;
/*\
input : 3 2 4 -1 -1 5 -1 -1 1 6 7 -1 -1 8 -1 -1 -1
output : 36
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
int SUM(node* root){

    if(root==NULL){
        return 0;
    }
    int leftSum = SUM(root->left);
    int rightSum = SUM(root->right);
    return (leftSum + rightSum + root->data);
}

int main(){
    // node* root = new node(10);
    node* root = BuildTree();
    int ans = SUM(root);
    cout<< ans;
    return 0;
}
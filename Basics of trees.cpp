#include <iostream>
using namespace std;
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
node* BuiledTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node* root = new node(x);
    root->left = BuiledTree();
    root->right = BuiledTree();
    return root;

}
int main() {
    node* root = BuiledTree();
    return 0;
}

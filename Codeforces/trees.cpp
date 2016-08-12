#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};
Node* NewNode(int data){
    Node* nnode = new Node();
    nnode->data = data;
    nnode->left = NULL;
    nnode->right = NULL;
    return nnode;
    }
int Insert(Node* root, int data){
    Node* nnode = NewNode(data);
    if(!root){
        root = nnode;

    }
}
int main(){
    Node* root = NULL;

}



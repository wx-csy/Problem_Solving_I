#include <iostream>
#include <cstddef>
#include <algorithm>
using namespace std;

struct node{
    node* left;
    node* right;
    int value;
};

node root;

void insert(int value, node* nod){
    if (value>nod->value){
        if (nod->left!=NULL){
            insert(value,nod->left);
        } else {
            node* newnode;
            newnode = new node;
            newnode->left = NULL;
            newnode->right = NULL;
            newnode->value = value;
            nod->left=newnode;
        }
    } else {
        if (nod->right!=NULL){
            insert(value,nod->right);
        } else {
            node* newnode;
            newnode = new node;
            newnode->left = NULL;
            newnode->right = NULL;
            newnode->value = value;
            nod->right=newnode;
        }
    }
}

int height(node* nod){
    int l, r;
    if (nod==NULL) return 0;
    l=height(nod->left);
    r=height(nod->right);
    if (l<0 || r<0) return -1;
    if (l!=r) return -1;
    return l+1;
}

void loaddata(){
    int x;
    cin>>x;
    root.value=x;
    while (cin>>x)
        insert(x, &root);
}

int main(){
    root.left=NULL;
    root.right=NULL;
    loaddata();
    cout<<(height(&root)>0?"Yes":"No");
    return 0;
}

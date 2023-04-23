#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        data = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

TreeNode* InsertNode(TreeNode* root, int data){
    if (root == NULL) {
        TreeNode* newnode=new TreeNode(data);
        root =newnode;
        return root;
    }
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
        if (temp->left != NULL){
            q.push(temp->left);
        }
        else {
            TreeNode* newnode=new TreeNode(data);
            temp->left = newnode;
            return root;
        }
        if (temp->right != NULL){
            q.push(temp->right);
        }
        else {
            TreeNode* newnode=new TreeNode(data);
            temp->right = newnode;
            return root;
        }
    }
    return root;
}

void PrintPreorder(TreeNode* temp)
{
    if (temp == NULL)return;

    cout << temp->data << ' ';
    PrintPreorder(temp->left);
    PrintPreorder(temp->right);
}

int main(){
    int x;
    cin>>x;
    vector<int> v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    TreeNode* root=new TreeNode(v[0]);
    for(int i=1;i<x;i++){
        root=InsertNode(root,v[i]);
    }
}
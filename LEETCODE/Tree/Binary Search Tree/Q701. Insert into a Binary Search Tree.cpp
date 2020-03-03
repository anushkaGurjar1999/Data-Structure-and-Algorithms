/*
 * Author : Anushka Gurjar
 * Date   : February 2020
 * flags    : -std=c++14
*/



#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
*/
// Problem Statement: https://leetcode.com/problems/insert-into-a-binary-search-tree

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* newNode = new TreeNode(val);
            return newNode;
        }
        
        if(val < root->val){
            TreeNode* res = insertIntoBST(root->left, val);
            if(res->val == val){
                root->left = res;
                return root;
            }
        }
        else{
            TreeNode* res = insertIntoBST(root->right, val);
            if(res->val == val){
                root->right = res;
                return root;
            }
        }
        return root;
    }
};

/*
if val < root
    traverse left subtree (if null found, insert the node)
    
if val > root
    traverse right subtree (if null found, insert the node)
*/

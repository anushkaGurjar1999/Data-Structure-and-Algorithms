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

// Problem Statement: https://leetcode.com/problems/binary-tree-pruning

class Solution {
public:
    TreeNode* pruneTree(TreeNode* root){
        letsPrune(root);
        return (root->val == 1 || root->left || root->right) ? root : nullptr;
    }
    bool letsPrune(TreeNode* node){
        if(!node)
            return 0;
        
        bool left = letsPrune(node->left);
        bool right = letsPrune(node->right);
        
        if(!left)
            node->left = nullptr;
        if(!right)
            node->right = nullptr;
        
        return node->val || left || right;
    }
};

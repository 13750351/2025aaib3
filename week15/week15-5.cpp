///week15-5.cpp 學習計畫(隱藏) Binary Tree 第一題
/// LeetCode 104. Maximum Depth of Binary Tree
class Solution {
public:
    ///Binary Tree是喜歡用函示呼叫法來解
    ///英文 Recursion(遞迴) 或 Recursive Function Cail
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0; /// 終止條件甚麼都沒有
        int left = maxDepth(root->left);//函式呼叫函式
        int right = maxDepth(root->right); ///函式呼叫函式
        return max(left,right) +1; /// 再加一層
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

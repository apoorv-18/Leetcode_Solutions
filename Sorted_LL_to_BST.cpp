/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
class Solution {
public:
    TreeNode* buildTree(vector<int>&tree,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = start+(end - start)/2;
        TreeNode* root= new TreeNode(tree[mid]);
        root->left=buildTree(tree,start,mid-1);
        root->right=buildTree(tree,mid+1,end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>tree;
        while(head){
            tree.push_back(head->val);
            head=head->next;
        }
        //if(head == NULL) return NULL;
        return buildTree(tree,0,tree.size()-1);
    }
};

//根据中序遍历和前序遍历重建二叉树
#include<vector>
using std::vector;
struct TreeNode{
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int v = 0)
     :_val(v),
     left(nullptr),
     right(nullptr)
   {}
};
class Solution {
  public:
        TreeNode* build_binary_tree(vector<int>& pre,int& idx,vector<int>&vin,int left,int right)
        {
            TreeNode* node = new TreeNode(pre[idx]);
            int cur=left;
            while(cur<=right&&vin[cur]!=pre[idx])
            {
               ++cur;
            }
            if(cur>left)
            {
               ++idx;
               node->left = build_binary_tree(pre, idx, vin, left, cur-1);
            }
            else 
            {
               node->left = nullptr;
            }
            if(cur<right)
            {
               ++idx;
               node->right = build_binary_tree(pre, idx, vin, cur+1, right);
            }
            else 
               node->right = nullptr;
            return node;
        }
        TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
            if(pre.empty())
             return nullptr;
            int idx= 0;
            return build_binary_tree(pre,idx,vin,0,pre.size()-1);
        }
};

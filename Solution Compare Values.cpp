
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    
public:

    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {

        TreeNode* current = root;
        TreeNode* p_successorInOrder = nullptr;

        while (current != nullptr) {
            if (current->val <= p->val) {
                current = current->right;
            } else {
                p_successorInOrder = current;
                current = current->left;
            }
        }

        return p_successorInOrder;
    }
};

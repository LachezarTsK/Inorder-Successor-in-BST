
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    
public:
    TreeNode* p_successorInOrder{};
    TreeNode* previous{};

    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        return (p->right != nullptr) ? leftmostNodeFromCurrentRoot(p->right) : inorder(root, p);
    }

    TreeNode* inorder(TreeNode* root, TreeNode* p) {

        if (root == nullptr) {
            return nullptr;
        }
        if (p_successorInOrder != nullptr) {
            return p_successorInOrder;
        }

        inorder(root->left, p);
        if (previous == p) {
            p_successorInOrder = root;
        }
        previous = root;
        inorder(root->right, p);

        return p_successorInOrder;
    }

    TreeNode* leftmostNodeFromCurrentRoot(TreeNode* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }
};

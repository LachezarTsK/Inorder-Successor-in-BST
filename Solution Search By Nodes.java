
public class Solution {

    TreeNode p_successorInOrder;
    TreeNode previous;

    public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
        return (p.right != null) ? leftmostNodeFromCurrentRoot(p.right) : inorder(root, p);
    }

    public TreeNode inorder(TreeNode root, TreeNode p) {

        if (root == null) {
            return null;
        }
        if (p_successorInOrder != null) {
            return p_successorInOrder;
        }

        inorder(root.left, p);
        if (previous == p) {
            p_successorInOrder = root;
        }
        previous = root;
        inorder(root.right, p);

        return p_successorInOrder;
    }

    public TreeNode leftmostNodeFromCurrentRoot(TreeNode node) {
        while (node != null && node.left != null) {
            node = node.left;
        }
        return node;
    }
}

class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

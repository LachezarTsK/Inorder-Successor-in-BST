
public class Solution {

    public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {

        TreeNode current = root;
        TreeNode p_successorInOrder = null;

        while (current != null) {
            if (current.val <= p.val) {
                current = current.right;
            } else {
                p_successorInOrder = current;
                current = current.left;
            }
        }

        return p_successorInOrder;
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

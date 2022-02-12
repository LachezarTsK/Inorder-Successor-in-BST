
function TreeNode(val) {
    this.val = val;
    this.left = this.right = null;
}

/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @return {TreeNode}
 */
var inorderSuccessor = function (root, p) {

    let current = root;
    let p_successorInOrder = null;

    while (current !== null) {
        if (current.val <= p.val) {
            current = current.right;
        } else {
            p_successorInOrder = current;
            current = current.left;
        }
    }

    return p_successorInOrder;
};


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
    this.p_successorInOrder = null;
    this.previous = null;
    return (p.right !== null) ? leftmostNodeFromCurrentRoot(p.right) : inorder(root, p);
};

/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @return {TreeNode}
 */
function inorder(root, p) {

    if (root === null) {
        return null;
    }
    if (this.p_successorInOrder !== null) {
        return this.p_successorInOrder;
    }

    inorder(root.left, p);
    if (this.previous === p) {
        this.p_successorInOrder = root;
    }
    this.previous = root;
    inorder(root.right, p);

    return this.p_successorInOrder;
}

/**
 * @param {TreeNode} node
 * @return {TreeNode}
 */
function leftmostNodeFromCurrentRoot(node) {
    while (node.left !== null) {
        node = node.left;
    }
    return node;
}

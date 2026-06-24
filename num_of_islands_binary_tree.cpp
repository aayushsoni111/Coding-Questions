struct TreeNode {
    int val;
    TreeNode* l;
    TreeNode* r;
};

void dfs(TreeNode* node, int parentVal, int& islands) {
    if(!node) {
        return;
    }
    if(node->val == 1 && parentVal == 0) {
        ++islands;
    }
    dfs(node->l, node->val, islands);
    dfs(node->r, node->val, islands);
}

int numberOfIslands(TreeNode* root) {
    int islands = 0;
    int parentVal = 0;
    dfs(root, parentVal, islands);
    return islands;
}

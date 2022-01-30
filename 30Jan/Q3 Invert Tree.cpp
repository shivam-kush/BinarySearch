/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    if(root == nullptr){
        return root;
    }
    Tree * temp = root->left;
    root->left = root->right;
    root->right = temp;
    solve(root->left);
    solve(root->right);
    return root;
}

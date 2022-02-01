/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root, int val) {
    if(root == nullptr){
        return false;
    }
    //bool flag = false;
    //Tree* itr = root;
    if(root->val == val){
        return true;
    }else if(root->val > val){
        return solve(root->left, val);
    }else{
        return solve(root->right, val);
    }
}

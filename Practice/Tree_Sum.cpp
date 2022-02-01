/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    /*
    int sum = 0;
    queue<Tree *> q;
    q.push(root);
    while(!q.empty()){
        Tree* temp = q.front();
        q.pop();
        sum += temp->val;
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return sum;
    */
    if (root == NULL)
        return 0;
    return (root->val + solve(root->left) + solve(root->right));
    
}

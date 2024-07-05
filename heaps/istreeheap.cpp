/*class Solution {
  public:
    bool isCBT(stuct Node* root,int index,int cnt){
        if(root==NULL) return true;
        else if(index>=cnt) return false;
        else{
            bool left = isCBT(root->left,2*index+1,cnt);
            bool right = isCBT(root->right,2*index+2,cnt);
            return (left && right);
        }
    }
    bool isMaxorder(struct Node* root){
        // leaf node
        if(root->left==NULL && root->right ==NULL) return true;
        
        // no right child CBT
        if(root->right ==NULL){
            if(root->data > root->left) return true;
        }
        else{
            bool left = isMaxorder(root->left);
            bool right = isMaxorder(root->right);
            
            return (left && right && (root->data>root->left->data && root->data>root->right->data)) 
        }
    }
    int countNodes(struct Node* root){
        if(root==NULL) return 0;
        
        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
    bool isHeap(struct Node* tree) {
        // code here
        int index = 0;
        int totalCount = countNodes(root); 
        if(isCBT(root,index,totalCount)&&isMaxorder(root)){
            return true;
        }
        else return false;
        
};
*/
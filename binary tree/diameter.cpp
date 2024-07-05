/*
class Solution {
    private:
    
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        
        int ans = max(left,right) + 1;
        return ans;
    }

  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        // Your code here
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + 1 + height(root->right);
        
        int final = max(op1 , max(op2,op3));
        return final;
    }
};
*/
/*
class Solution {
    private:
    
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        
        int ans = max(left,right) + 1;
        return ans;
    }

  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int> diam(Node* root){
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diam(root->left);
        pair<int,int> right = diam(root->right);
        
        int op1 = left.first;
        int op2= right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second,right.second)+ 1 ;
        return ans;
    }
    int diameter(Node* root) {
        
        // Your code here
        return diam(root).first;
    }
};*/
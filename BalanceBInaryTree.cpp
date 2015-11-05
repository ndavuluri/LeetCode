Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.s


/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public boolean isBalanced(TreeNode root) {
        if(root == null || (root.left == null && root.right == null))
        return true;

        if(root.left == null){
            if(root.right.left != null || root.right.right != null)
            return false;
            else 
            return true;
        }
         if(root.right == null){
            if(root.left.left != null || root.left.right != null)
            return false;
            else 
            return true;
        }
        if(root.right.left == null && root.right.right == null && root.left.left == null && root.left.right == null){
         return true;   
        }
        if(root.right.left == null && root.right.right == null){
            if(root.left.left.left == null && root.left.left.right == null && root.left.right.left == null && root.left.right.right == null)
            return true;
            else
            return false;
        }
       if(root.left.left == null && root.left.right == null){
            if(root.right.left.left == null && root.right.left.right == null && root.right.right.left == null && root.right.right.right == null)
            return true;
            else
            return false;
        }
        
    
    
     return (isBalanced(root.left) && isBalanced(root.right));
}
}
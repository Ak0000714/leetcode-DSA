/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer>view= new ArrayList<Integer>();
        Queue<TreeNode> q= new LinkedList<>();

        if(root==null){
            return view;
        }

        q.add(root);
        while(!q.isEmpty()){
            Queue<TreeNode> nxtlvl=new LinkedList<>();
            TreeNode last =null;
            while(!q.isEmpty()){
            last=q.poll();
            if(last.left!=null){
                nxtlvl.add(last.left);
            }
            if(last.right!=null){
                nxtlvl.add(last.right);
            }

        }
        q=nxtlvl;
        view.add(last.val);
        }
        return view;
    }
        
    }
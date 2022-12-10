package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution105 {
    HashMap<Integer, Integer> map = new HashMap<>();
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        int n = inorder.length;
        for (int i = 0; i < n; i++) {
            map.put(inorder[i], i);
        }
        return process(preorder, inorder, 0, n - 1, 0, n - 1);
    }

    private TreeNode process(int[] preorder, int[] inorder, int preorderBegin, int preorderEnd, int inorderBegin, int inorderEnd){
        if (preorderBegin > preorderEnd){
            return null;
        }
        TreeNode root = new TreeNode(preorder[preorderBegin]);
        int inorderIndex = map.get(preorder[preorderBegin]);
        int leftTreeSize = inorderIndex - inorderBegin;
        root.left = process(preorder, inorder, preorderBegin + 1, preorderBegin + leftTreeSize, inorderBegin, inorderIndex);
        root.right = process(preorder, inorder, preorderBegin + leftTreeSize + 1, preorderEnd, inorderIndex + 1, inorderEnd);
        return root;
    }


    public static void main(String[] args) {
        Solution105 solution105 = new Solution105();
        System.out.println(solution105.buildTree(new int[]{3, 9, 20, 15, 7}, new int[]{9, 3, 15, 20, 7}));
    }
}
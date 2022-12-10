package QuestionBank.Solution101_200;

import tool.TreeNode;

import java.util.HashMap;

/**
 * @author windows
 */
public class Solution106 {
    HashMap<Integer, Integer> map = new HashMap<>();
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        int n = inorder.length;
        for (int i = 0; i < n; i++) {
            map.put(inorder[i], i);
        }
        return process(inorder, postorder, 0, n - 1, 0, n - 1);
    }

    private TreeNode process(int[] inorder, int[] postorder, int inorderBegin, int inorderEnd, int postorderBegin, int postorderEnd){
        // [9,3,15,20,7]    [9,15,7,20,3]
        if (postorderBegin > postorderEnd){
            return null;
        }
        TreeNode root = new TreeNode(postorder[postorderEnd]);
        int rootIndex = map.get(postorder[postorderEnd]);
        int leftSize = rootIndex - inorderBegin;
        int rightSize = inorderEnd - rootIndex;
        root.left = process(inorder, postorder, inorderBegin, rootIndex - 1, postorderBegin,  postorderEnd + leftSize);
        root.right = process(inorder, postorder, rootIndex + 1, inorderEnd, postorderEnd - 1 - rightSize, postorderEnd - 1);
        return root;
    }


    public static void main(String[] args) {
        Solution106 solution106 = new Solution106();
        System.out.println(solution106.buildTree(new int[]{9, 3, 15, 20, 7}, new int[]{9, 15, 7, 20, 3}));
    }
}
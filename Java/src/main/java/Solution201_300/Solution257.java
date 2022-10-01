package Solution201_300;

import tool.TreeGenerate;
import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution257 {
    ArrayList<String> list = new ArrayList<>();
    ArrayList<String> sb = new ArrayList<>();
    public List<String> binaryTreePaths(TreeNode root) {
        if (root == null){
            return list;
        }
        sb.add(String.valueOf(root.val));
        if (root.left == null && root.right == null) {
            String str = String.join("->", sb);
            list.add(str);
        }
        binaryTreePaths(root.left);
        binaryTreePaths(root.right);
        sb.remove(sb.size() - 1);
        return list;
    }



    public static void main(String[] args) {
        Solution257 solution257 = new Solution257();
        TreeNode tree = TreeGenerate.createTree(new Integer[]{1,2,3,null,5});
        List<String> strings = solution257.binaryTreePaths(tree);
        for (String str : strings) {
            System.out.println(str);
        }
    }
}
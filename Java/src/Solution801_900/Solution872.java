package Solution801_900;

import tool.TreeGenerate;
import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution872 {

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        StringBuilder leafFromTree1 = getLeafFromTree(root1, new StringBuilder());
        StringBuilder leafFromTree2 = getLeafFromTree(root2, new StringBuilder());
        return leafFromTree1.toString().equals(leafFromTree2.toString());
    }

    private StringBuilder getLeafFromTree(TreeNode root, StringBuilder sb){
        if (root == null){
            return sb;
        }
        if (root.left == null && root.right == null) {
            sb.append(root.val + '#');
        }
        getLeafFromTree(root.left, sb);
        getLeafFromTree(root.right, sb);
        return sb;
    }




    public static void main(String[] args) {
        Solution872 solution872 = new Solution872();
        TreeNode tree1 = TreeGenerate.createTree(new Integer[]{3, 5, 1, 6, 2, 9, 8, null, null, 7, 14});
        TreeNode tree2 = TreeGenerate.createTree(new Integer[]{3, 5, 1, 6, 71, 4, 2, null, null, null, null, null, null, 9, 8});
        List<TreeNode> treeList1 = TreeGenerate.createTreeList(new Integer[]{3, 5, 1, 6, 2, 9, 8, null, null, 7, 14}, new ArrayList<>());
        List<TreeNode> treeList2 = TreeGenerate.createTreeList(new Integer[]{3, 5, 1, 6, 71, 4, 2, null, null, null, null, null, null, 9, 8}, new ArrayList<>());
        TreeGenerate.print(treeList1);
        TreeGenerate.print(treeList2);
        System.out.println(solution872.leafSimilar(tree1, tree2));
    }
}
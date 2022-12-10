package QuestionBank.Solution601_700;

import tool.TreeGenerate;
import tool.TreeNode;

/**
 * @author windows
 */
public class Solution606 {
    StringBuilder sb = new StringBuilder();
    public String tree2str(TreeNode root) {
        if (root == null){
            return sb.toString();
        }
        sb.append(root.val);
        if (root.left != null || root.right!= null) {
            sb.append('(');
            tree2str(root.left);
            sb.append(')');
            sb.append('(');
            tree2str(root.right);
            sb.append(')');
        }
        String replace = sb.toString().replace("())", ")");
        if (replace.endsWith("()")){
            replace = replace.substring(0, replace.length() - 2);
        }
        return replace;
    }



    public static void main(String[] args) {
        Solution606 solution606 = new Solution606();
        TreeNode tree = TreeGenerate.createTree(new Integer[]{1,2,null,3,4});
        System.out.println(solution606.tree2str(tree));
    }
}
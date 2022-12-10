package QuestionBank.Solution001_100;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution95 {

    public List<TreeNode> generateTrees(int n) {
        List<TreeNode> res = new ArrayList<>();
        if (n == 0){
            return res;
        }
        return process(1, n);
    }

    private List<TreeNode> process(int begin, int end) {
        ArrayList<TreeNode> ans = new ArrayList<>();
        if (begin > end){
            ans.add(null);
            return ans;
        }
        if (begin == end) {
            ans.add(new TreeNode(begin));
            return ans;
        }
        for (int i = begin; i <= end; i++) {
            List<TreeNode> left = process(begin, i - 1);
            List<TreeNode> right = process(i + 1, end);
            for (TreeNode leftTree: left) {
                for (TreeNode rightTree: right) {
                    TreeNode root = new TreeNode(i);
                    root.left = leftTree;
                    root.right = rightTree;
                    ans.add(root);
                }
            }
        }
        return ans;
    }


    public static void main(String[] args) {
        Solution95 solution95 = new Solution95();
        List<TreeNode> treeNodes = solution95.generateTrees(3);
        System.out.println(treeNodes.size());
    }
}
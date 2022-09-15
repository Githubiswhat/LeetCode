package Solution001_100;

import tool.TreeNode;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution94 {

    List<Integer> list = new ArrayList<>();
    public List<Integer> inorderTraversal(TreeNode root) {
        if (root == null){
            return list;
        }
        inorderTraversal(root.left);
        list.add(root.val);
        inorderTraversal(root.right);
        return list;
    }
}

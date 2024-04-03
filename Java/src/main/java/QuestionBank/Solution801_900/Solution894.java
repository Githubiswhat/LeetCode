package QuestionBank.Solution801_900;


import com.sun.org.apache.bcel.internal.generic.NEW;
import tool.TreeNode;

import javax.lang.model.element.VariableElement;
import java.sql.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * @author windows
 */
public class Solution894 {

    private final static List<TreeNode>[] f = new ArrayList[11];

    static {
        Arrays.setAll(f, i -> new ArrayList<>());
        f[1].add(new TreeNode(0));
        for (int i = 2; i < 11; i++) {
            for (int j = 1; j < i; j++) {
                for (TreeNode left : f[j]) {
                    for (TreeNode right : f[i - j]) {
                        f[i].add(new TreeNode(0, left, right));
                    }
                }
            }
        }
    }

    public List<TreeNode> allPossibleFBT(int n) {
        return f[n / 2 > 0 ? (n + 1) / 2 : 0];
    }


    public static void main(String[] args) {
        Solution894 solution894 = new Solution894();
    }
}

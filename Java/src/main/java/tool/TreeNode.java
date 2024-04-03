package tool;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

/**
 * @author windows
 */
@AllArgsConstructor
@NoArgsConstructor
@Getter
@Setter
public class TreeNode {

    private int val;
    private TreeNode left;
    private TreeNode right;

}

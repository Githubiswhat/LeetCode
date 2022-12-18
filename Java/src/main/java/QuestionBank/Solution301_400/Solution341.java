package QuestionBank.Solution301_400;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * @author windows
 */
public class Solution341 {
    public static void main(String[] args) {
        Solution341 solution341 = new Solution341();
    }


    public interface NestedInteger {
        boolean isInteger();

        Integer getInteger();

        List<NestedInteger> getList();
    }

    public class NestedIterator implements Iterator<Integer> {
        List<Integer> list;
        Iterator<Integer> cur;
        boolean finalValue;

        public NestedIterator(List<NestedInteger> nestedList) {
            list = new ArrayList<>();
            dfs(nestedList);
            cur = list.iterator();
        }

        private void dfs(List<NestedInteger> nestedList) {
            for (NestedInteger nested : nestedList) {
                if (nested.isInteger()){
                    list.add(nested.getInteger());
                }else {
                    dfs(nested.getList());
                }
            }
        }

        @Override
        public Integer next() {
            return cur.next();
        }

        @Override
        public boolean hasNext() {
            return cur.hasNext();
        }
    }
}
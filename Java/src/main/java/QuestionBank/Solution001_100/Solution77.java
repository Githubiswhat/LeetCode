package QuestionBank.Solution001_100;

import com.sun.org.apache.xerces.internal.util.EntityResolverWrapper;

import java.util.*;

/**
 * @author windows
 */
//public class Solution77 {
//    List<List<Integer>> lists = new ArrayList<>();
//    public List<List<Integer>> combine(int n, int k) {
//        for (int i = 1; i <= n - k; i++) {
//            List<Integer> list = new ArrayList<Integer>();
//            list.add(i);
//            process(list, k, i + 1, n);
//        }
//        return lists;
//    }
//
//    private void process(List<Integer> list, int k, int index, int n){
//        if (index > n + 1){
//            return;
//        }
//        if (list.size() == k){
//            lists.add(new ArrayList<>(list));
//            return;
//        }
//        list.add(index);
//        process(list, k, index + 1, n);
//        list.remove(list.size() - 1);
//        process(list, k, index + 1, n);
//    }
//
//
//    public static void main(String[] args) {
//        Solution77 solution77 = new Solution77();
//        List<List<Integer>> combine = solution77.combine(4, 2);
//        for (List<Integer> list : combine) {
//            for (int num : list) {
//                System.out.println(num);
//            }
//            System.out.println();
//        }
//    }
//}


public class Solution77 {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> lists = new ArrayList<>();
        Deque<Integer> deque = new LinkedList<>();
        dfs(lists, n, k, 1, deque);
        return lists;
    }

    private void dfs(List<List<Integer>> lists, int n, int k, int begin, Deque<Integer> deque) {
        if (deque.size() == k){
            lists.add(new ArrayList<>(deque));
            return;
        }
        for (int i = begin; i <= n; i++) {
            deque.add(i);
            dfs(lists, n, k, i + 1, deque);
            deque.removeLast();
        }
    }


    public static void main(String[] args) {
        Solution77 solution77 = new Solution77();
        List<List<Integer>> combine = solution77.combine(4, 2);
        for (List<Integer> list : combine) {
            for (int num : list) {
                System.out.println(num);
            }
            System.out.println();
        }
    }
}

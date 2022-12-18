package QuestionBank.Solution201_300;

import java.util.*;

/**
 * @author windows
 */
public class Solution210 {

    public int[] findOrder(int numCourses, int[][] prerequisites) {
        int[] inDegree = new int[numCourses];
        int[] res = new int[numCourses];
        int index = 0;
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        for (int i = 0; i < prerequisites.length; i++){
            int[] prerequisite = prerequisites[i];
            inDegree[prerequisite[0]]++;
            List<Integer> list = map.getOrDefault(prerequisite[1], new ArrayList<Integer>());
            list.add(prerequisite[0]);
            map.put(prerequisite[1], list);
        }
        Queue<Integer> queue = new LinkedList<>();
        for (int i = 0; i < inDegree.length; i++) {
            if (inDegree[i] == 0){
                queue.offer(i);
                res[index++] = i;
            }
        }
        while(!queue.isEmpty()){
            int cource = queue.poll();
            if (map.containsKey(cource)){
                List<Integer> list = map.get(cource);
                for (int i : list) {
                    inDegree[i]--;
                    if (inDegree[i] == 0){
                        queue.offer(i);
                        res[index++] = i;
                    }
                }
            }
        }
        return index == numCourses ? res : new int[0];
    }


    public static void main(String[] args) {
        Solution210 solution210 = new Solution210();
        System.out.println(Arrays.toString(solution210.findOrder(2, new int[][]{{1, 0}})));
    }
}
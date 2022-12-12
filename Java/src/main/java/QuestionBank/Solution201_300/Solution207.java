package QuestionBank.Solution201_300;

import java.util.*;

/**
 * @author windows
 */
public class Solution207 {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        int[] inDegree = new int[numCourses];
        HashMap<Integer, List<Integer>> map = new HashMap<>();
        for (int i = 0; i < prerequisites.length; i++) {
            int[] prerequisite = prerequisites[i];
            inDegree[prerequisite[0]]++;
            List<Integer> list = map.getOrDefault(prerequisite[1], new ArrayList<Integer>());
            list.add(prerequisite[0]);
            map.put(prerequisite[1], list);
        }
        Queue<Integer> queue = new LinkedList<>();
        for (int i = 0; i < numCourses; i++) {
            if (inDegree[i] == 0){
                queue.offer(i);
            }
        }
        int count = 0;
        while(!queue.isEmpty()){
            int course = queue.poll();
            count++;
            List<Integer> list = map.get(course);
            if (list != null){
                for (int i = 0; i < list.size(); i++) {
                    inDegree[list.get(i)]--;
                    if (inDegree[list.get(i)] == 0){
                        queue.offer(list.get(i));
                    }
                }
            }
        }
        return count == numCourses;
    }


    public static void main(String[] args) {
        Solution207 solution207 = new Solution207();
    }
}
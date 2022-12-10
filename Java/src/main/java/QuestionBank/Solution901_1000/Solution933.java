package QuestionBank.Solution901_1000;

import java.util.LinkedList;
import java.util.Queue;

/**
 * @author windows
 */
public class Solution933 {

    class RecentCounter {
        private Queue<Integer> queue;
        public RecentCounter() {
            queue = new LinkedList<>();
        }

        public int ping(int t) {
            queue.add(t);
            while(t - queue.peek() > 3000){
                queue.poll();
            }
            return queue.size();
        }
    }


    public static void main(String[] args) {
        Solution933 solution933 = new Solution933();
    }
}
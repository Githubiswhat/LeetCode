package QuestionBank.Solution701_800;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution705 {


    static class MyHashSet {
        private int capacity;
        private int size;

        private List<List<Integer>> container;

        public MyHashSet() {
            capacity = 16;
            container = new ArrayList<>(capacity);
            for (int i = 0; i < capacity; i++) {
                container.add(new ArrayList());
            }
            size = 0;
        }

        public void add(int key) {
            int num = key % capacity;
            List<Integer> list = container.get(num);
            for (int i = 0; i < list.size(); i++) {
                if (list.get(i) == key) {
                    return;
                }
            }
            list.add(key);
            size++;
        }

        public void remove(int key) {
            int num = key % capacity;
            List<Integer> list = container.get(num);
            for (int i = 0; i < list.size(); i++) {
                if (list.get(i) == key) {
                    list.remove(i);
                }
            }
        }

        public boolean contains(int key) {
            int num = key % capacity;
            List<Integer> list = container.get(num);
            for (int i = 0; i < list.size(); i++) {
                if (list.get(i) == key) {
                    return true;
                }
            }
            return false;
        }
    }


    public static void main(String[] args) {
        MyHashSet myHashSet = new Solution705.MyHashSet();
        myHashSet.add(1);
    }
}
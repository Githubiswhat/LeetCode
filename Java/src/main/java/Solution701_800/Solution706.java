package Solution701_800;

import java.util.ArrayList;
import java.util.List;

/**
 * @author windows
 */
public class Solution706 {
    class MyHashMap {
        private List<List<int[]>> container;
        private int capacity;
        private int size;

        public MyHashMap() {
            capacity = 16;
            container = new ArrayList<>(capacity);
            for (int i = 0; i < capacity; i++) {
                container.add(new ArrayList<>());
            }
            size = 0;
        }

        public void put(int key, int value) {
            int num = key % capacity;
            List<int[]> list = container.get(num);
            for (int i = 0; i < list.size(); i++) {
                if (list.get(i)[0] == key){
                    list.get(i)[1] = value;
                    return;
                }
            }
            int[] ints = {key, value};
            list.add(ints);
        }

        public int get(int key) {
            int num = key % capacity;
            List<int[]> list = container.get(num);
            for (int i = 0; i < list.size(); i++) {
                if (list.get(i)[0] == key){
                    return list.get(i)[1];
                }
            }
            return -1;
        }

        public void remove(int key) {
            int num = key % capacity;
            List<int[]> list = container.get(num);
            for (int i = 0; i < list.size(); i++) {
                if (list.get(i)[0] == key){
                    list.remove(i);
                }
            }
        }
    }


    public static void main(String[] args) {
        Solution706 solution706 = new Solution706();
    }
}
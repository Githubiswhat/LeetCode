package Solution201_300;

/**
 * @author windows
 */
public class Solution215 {
//    public int findKthLargest(int[] nums, int k) {
//        PriorityQueue<Integer> queue = new PriorityQueue<>((a, b) -> b - a);
//        for (int i = 0; i < nums.length; i++) {
//            queue.add(nums[i]);
//        }
//        int result = 0;
//        for (int i = 0; i < k; i++) {
//            result = queue.poll();
//        }
//        return result;
//    }

    public static void main(String[] args) {
        Solution215 solution215 = new Solution215();
        System.out.println(solution215.findKthLargest(new int[]{3, 2, 3, 1, 2, 4, 5, 5, 6}, 4));
        System.out.println(solution215.findKthLargest(new int[]{3, 2, 1, 5, 6, 4}, 2));
        System.out.println(solution215.findKthLargest(new int[]{1}, 1));
        int partition = solution215.partition(new int[]{3, 2, 3, 1, 2, 4, 5, 5, 6}, 0, 8);
        System.out.println(partition);
    }

    public int findKthLargest(int[] nums, int k) {
        int left = 0;
        int right = nums.length - 1;
        int n = nums.length;
        while (left <= right) {
            int partition = partition(nums, left, right);
            if (partition == n - k) {
                return nums[partition];
            } else if (partition < n - k) {
                left = partition + 1;
            } else {
                right = partition - 1;
            }
        }
        return 0;
    }

    public int partition(int[] arr, int startIndex, int endIndex) {
        int pivot = arr[startIndex];
        int leftPoint = startIndex;
        int rightPoint = endIndex;

        while (leftPoint < rightPoint) {
            // 从右向左找出比pivot小的数据，
            while (leftPoint < rightPoint
                    && arr[rightPoint] > pivot) {
                rightPoint--;
            }
            // 找到后立即放入左边坑中，当前位置变为新的"坑"
            if (leftPoint < rightPoint) {
                arr[leftPoint] = arr[rightPoint];
                leftPoint++;
            }
            // 从左向右找出比pivot大的数据
            while (leftPoint < rightPoint
                    && arr[leftPoint] <= pivot) {
                leftPoint++;
            }
            // 找到后立即放入右边坑中，当前位置变为新的"坑"
            if (leftPoint < rightPoint) {
                arr[rightPoint] = arr[leftPoint];
                rightPoint--;
            }
        }
        // 将最开始存储的分界值放入当前的"坑"中
        arr[rightPoint] = pivot;
        return rightPoint;
    }
}
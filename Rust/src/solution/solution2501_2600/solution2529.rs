use std::cmp::max;

// This is solution 2529 code
impl Solution {
    pub fn maximum_count(nums: Vec<i32>) -> i32 {
        let mut neg = 0;
        let mut pos = 0;
        for &x in &nums {
            if x > 0 {
                pos += 1;
            }else if x < 0 {
                neg += 1;
            }
        }
        return neg.max(pos);
    }
}

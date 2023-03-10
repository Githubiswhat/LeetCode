use std::collections::HashMap;

fn find_relative_ranks(nums: Vec<i32>) -> Vec<String> {
    let mut sorted_nums = nums.clone();
    sorted_nums.sort_unstable_by(|a, b| b.cmp(a));
    let mut rank_map: HashMap<i32, usize> = HashMap::new();
    for (i, num) in sorted_nums.iter().enumerate() {
        rank_map.insert(*num, i + 1);
    }
    let mut result = Vec::new();
    for num in nums.iter() {
        let rank = rank_map.get(num).unwrap();
        let rank_str = match rank {
            1 => String::from("Gold Medal"),
            2 => String::from("Silver Medal"),
            3 => String::from("Bronze Medal"),
            _ => rank.to_string(),
        };
        result.push(rank_str);
    }
    result
}

fn main() {
    let nums = vec![5, 4, 3, 2, 1];
    let result = find_relative_ranks(nums);
    println!("{:?}", result);
}


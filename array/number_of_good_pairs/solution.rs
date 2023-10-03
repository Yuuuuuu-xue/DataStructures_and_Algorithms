fn main() {
}

struct Solution {}

use std::collections::HashMap;

impl Solution {
  pub fn num_identical_pairs(nums: Vec<i32>) -> i32 {
    let mut m: HashMap<i32, i32> = HashMap::new();
    let mut o = 0;

    for i in (0..nums.len()).rev() {
      let x = m.get(&nums[i]).unwrap_or(&0);
      o += x;
      m.insert(nums[i], x + 1);
    }

    o
  }
}
fn main() {
}

struct Solution {}

use std::collections::HashMap;

impl Solution {
  pub fn majority_element(nums: Vec<i32>) -> Vec<i32> {
    let mut m: HashMap<i32, usize> = HashMap::new(); 
    
    for num in &nums {
      m.insert(*num, *m.get(num).unwrap_or(&0) + 1);
    }

    let mut o: Vec<i32> = vec![];
    let t = nums.len() / 3;
    for (key, value) in &m {
      if value > &t {
        o.push(*key);
      }
    }
    o
  }
}
fn main() {
}

struct Solution {}

impl Solution {
  pub fn find132pattern(nums: Vec<i32>) -> bool {
    let mut curr_k = i32::MIN;
    let mut s: Vec<i32> = vec![];

    for i in (0..nums.len()).rev() {
      if nums[i] < curr_k {
        return true;
      }

      while s.len() > 0 && s.last().unwrap() < &nums[i] {
        curr_k = curr_k.max(nums[i]);
        s.pop();
      }

      s.push(nums[i]);
    }

    false
  }
}
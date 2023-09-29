fn main() {
}

struct Solution {}

impl Solution {
  pub fn is_monotonic(nums: Vec<i32>) -> bool {
    let mut c = 0;
    for i in 0..nums.len() - 1 {
      if (c < 0 && nums[i] > nums[i + 1]) || (c > 0 && nums[i] < nums[i + 1]) {
        return false;
      }
      if c == 0 && nums[i] != nums[i + 1] {
        c = if nums[i] < nums[i + 1] { -1 } else { 1 };
      }
    }

    true
  }
}
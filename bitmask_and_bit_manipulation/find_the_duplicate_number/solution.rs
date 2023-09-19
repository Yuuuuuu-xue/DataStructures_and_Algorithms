fn main() {
  println!("Hello, world!");
}

struct Solution {}

impl Solution {
  pub fn find_duplicate(mut nums: Vec<i32>) -> i32 {
    nums.sort();
    
    for i in 0..nums.len() - 1 {
      if (nums[i] ^ nums[i + 1]) == 0 {
        return nums[i];
      }
    }

    return -1;
  }
}

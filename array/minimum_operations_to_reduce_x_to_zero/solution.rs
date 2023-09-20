fn main() {
  println!("Hello, world!");
}

struct Solution {}

impl Solution {
  pub fn min_operations(nums: Vec<i32>, x: i32) -> i32 {
    let mut total = 0;
    let n = nums.len();
    let borrow_nums = &nums;
    for num in borrow_nums {
      total += num;
    }

    if total < x {
      return -1;
    }

    if total == x {
      return n as i32;
    }

    let mut o: i32 = -1;
    let mut left: usize = 0;
    let mut right: usize = 0;
    let mut curr_sum = 0;

    while right < n {
      curr_sum += borrow_nums[right];
      right += 1;

      while curr_sum > total - x {
        curr_sum -= borrow_nums[left];
        left += 1;
      }

      if curr_sum == total - x {
        o = o.max((right - left) as i32);
      }
    }

    return if o == -1 { -1 } else { n as i32 - o };
  }
}

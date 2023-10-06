fn main() {
}

struct Solution {}

impl Solution {
  pub fn integer_break(n: i32) -> i32 {
    if n == 2 {
      return 1;
    }

    if n == 3 {
      return 2;
    }

    let mut dp: Vec<i32> = vec![];
    dp.push(1);
    dp.push(2);
    dp.push(3);

    for i in 3..n {
      let mut max_product = 0;
      for k in 1..=(i + 1)/2 {
        max_product = max_product.max(dp[(k - 1) as usize] * dp[(i + 1 - k - 1) as usize]);
      }
      dp.push(max_product);
    }

    dp[(n - 1) as usize]
  } 
}
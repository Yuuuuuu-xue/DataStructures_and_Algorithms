fn main() {
  println!("Hello, world!");
}

struct Solution {}

use std::collections::BinaryHeap;
use std::cmp::Ordering;

#[derive(Debug, PartialEq, Eq)]
struct CustomTuple(i32, i32);

impl Ord for CustomTuple {
  fn cmp(&self, other: &Self) -> Ordering {
    if self.0 < other.0 {
      Ordering::Greater
    } else if self.0 > other.0 {
      Ordering::Less
    } else {
      if self.1 < other.1 {
        Ordering::Greater
      } else if self.1 > other.1 {
        Ordering::Less
      } else {
        Ordering::Equal
      }
    }
  }
}

impl PartialOrd for CustomTuple {
  fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
    Some(self.cmp(other))
  }
}

fn get_num_soliders(row: &Vec<i32>) -> i32 {
  let mut left: i32 = 0;
  let mut right: i32 = (row.len() as i32) - 1;
  while left <= right {
    let mid = (left + right) / 2;
    if row[mid as usize] == 0 {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return left as i32;
}

impl Solution {
  pub fn k_weakest_rows(mat: Vec<Vec<i32>>, k: i32) -> Vec<i32> {
    let mut min_heap: BinaryHeap<CustomTuple> = BinaryHeap::new();
    for i in 0..mat.len() {
      min_heap.push(CustomTuple(get_num_soliders(&mat[i]), i as i32));
    }

    let mut num_soliders: Vec<i32> = vec![];
    for _ in 0..k {
      num_soliders.push(min_heap.pop().unwrap().1);
    }

    return num_soliders;
  }
}

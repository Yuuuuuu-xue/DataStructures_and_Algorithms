fn main() {
  println!("Hello, world!");
}

struct Solution {}

use std::collections::BTreeSet;
use std::ops::Bound::Included;

impl Solution {
  pub fn min_interval(intervals: Vec<Vec<i32>>, queries: Vec<i32>) -> Vec<i32> {
    let mut intervals = intervals;
    intervals.sort_by(|interval1, interval2| (interval1[1] - interval1[0]).cmp(&(interval2[1] - interval2[0])));
    let mut bst: BTreeSet<(i32, usize)> = BTreeSet::new();
    for (i, query) in queries.iter().enumerate() {
      bst.insert((*query, i));  
    }

    let mut o: Vec<i32> = vec![-1; queries.len()];
    for interval in intervals {

      let to_remove: Vec<(i32, usize)> = bst.range((Included(&(interval[0], 0)), Included(&(interval[1], queries.len())))).cloned().collect();
  
      for &it in &to_remove {
        o[it.1] = interval[1] - interval[0] + 1;
        bst.remove(&it);
      }
    }

    return o;
  }
}

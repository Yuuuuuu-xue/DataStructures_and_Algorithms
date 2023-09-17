fn main() {
  println!("Hello, world!");
}

struct Solution {}

use std::collections::HashSet;

impl Solution {
pub fn shortest_path_length(graph: Vec<Vec<i32>>) -> i32 {
  let mut q: Vec<(i32, i32)> = vec![];
  let mut seen: HashSet<(i32, i32)> = HashSet::new();
  let n = graph.len();
  for i in 0..n {
    let i = i as i32;
    let p: (i32, i32) = (i, 1 << i);
    q.push(p);
    seen.insert(p);
  }

  let mut cost = 0;
  let base: i32 = 2;
  while q.len() > 0 {
    let mut next_q: Vec<(i32, i32)> = vec![];
    
    for (curr_node, curr_mask) in &q {
      let curr_mask_val = *curr_mask;
      if curr_mask_val == base.pow(n as u32) - 1 {
        return cost;
      }

      for neighbor in &graph[*curr_node as usize] {
        let mask = curr_mask_val | (1 << neighbor);
        let p = (*neighbor, mask);
        if !seen.contains(&p) {
          next_q.push(p);
          seen.insert(p);
        }
      }
    }
    cost += 1;
    q = next_q;
  }

  -1
}
}

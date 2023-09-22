fn main() {
  println!("Hello, world!");
}

struct Solution {}

impl Solution {
  pub fn is_subsequence(s: String, t: String) -> bool {
    let mut curr_s: usize = 0;
    let mut curr_t: usize = 0;
    let s_chars: Vec<char> = s.chars().collect();
    let t_chars: Vec<char> = t.chars().collect();
    let n = s.len();
    let m = t.len();
    while curr_s < n && curr_t < m {
      if s_chars[curr_s] == t_chars[curr_t] {
        curr_s += 1;
      }
      curr_t += 1;
    }
    curr_s == n
  }
}
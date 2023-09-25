fn main() {
}

struct Solution {}

impl Solution {
  pub fn find_the_difference(s: String, t: String) -> char {
    let mut curr: u8 = 0;
    for c in s.chars() {
      curr ^= c as u8;
    }
    for c in t.chars() {
      curr ^= c as u8;
    }
    return curr as char;
  }
}
fn main() {
}

struct Solution {}

impl Solution {
  pub fn reverse_words(s: String) -> String {
    let mut s = s;
    let mut stack: Vec<char> = vec![];
    s.push(' ');
    let mut o: String = String::new();

    for c in s.chars() {
      if c != ' ' {
        stack.push(c);
      } else {
        while stack.len() > 0 {
          o.push(stack.pop().unwrap());
        }
        o.push(' ');
      }
    }
    o.pop();
    o
  }
}
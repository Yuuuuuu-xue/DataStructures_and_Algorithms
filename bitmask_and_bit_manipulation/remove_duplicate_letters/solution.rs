fn main() {
}

struct Solution {}

impl Solution {
  pub fn remove_duplicate_letters(s: String) -> String {
    let mut counts = [0; 26];
    for c in s.chars() {
      counts[c as usize - 'a' as usize] += 1;
    }

    let mut o = String::new();
    let mut used = 0;
    for c in s.chars() {
      let i = c as usize - 'a' as usize;
      counts[i] -= 1;
      if (used & (1 << i)) == 0 {
        used |= 1 << i;
        while o.len() > 0 && o.chars().last().unwrap() > c && counts[o.chars().last().unwrap() as usize - 'a' as usize] > 0 {
          used &= !(1 << (o.chars().last().unwrap() as usize - 'a' as usize));
          o.pop();
        }
        o.push(c);
      }
    }

    return o;
  }
}
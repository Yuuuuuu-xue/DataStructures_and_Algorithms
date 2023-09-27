fn main() {
}

struct Solution {}

impl Solution {
  pub fn decode_at_index(s: String, k: i32) -> String {
    let mut k: u64 = k as u64;
    let mut decode_size: u64 = 0;
    let mut i: usize = 0;
    while decode_size < k {
      let c = s.chars().nth(i).unwrap();
      if c.is_digit(10) {
        decode_size *= (c as usize - '0' as usize) as u64;
      } else {
        decode_size += 1;
      }
      i += 1;
    }

    i -= 1;
    while i >= 0 {
      let c = s.chars().nth(i).unwrap();
      if c.is_digit(10) {
        decode_size /= (c as usize - '0' as usize) as u64;
        k %= decode_size;
      } else {
        if k == 0 || decode_size == k {
          return c.to_string();
        }
        decode_size -= 1;
      }
      
      i -= 1;
    }

    return s;
  }
}
fn main() {
}

struct Solution {}

impl Solution {
  pub fn winner_of_game(colors: String) -> bool {
    let mut num_three_conse_a = 0;
    let mut num_three_conse_b = 0;

    if colors.len() < 3 {
      return false;
    }

    let color_chars: Vec<char> = colors.chars().collect();
    for i in 0..colors.len() - 2 {
      let a = color_chars[i];
      let b = color_chars[i + 1];
      let c = color_chars[i + 2];

      if a == 'A' && b == 'A' && c == 'A' {
        num_three_conse_a += 1;
      } else if a == 'B' && b == 'B' && c == 'B' {
        num_three_conse_b += 1;
      }
    }

    return num_three_conse_a > num_three_conse_b;
  }
}
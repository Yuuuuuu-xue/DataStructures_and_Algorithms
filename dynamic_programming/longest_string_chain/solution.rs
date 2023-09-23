fn main() {
}

struct Solution {}

use std::collections::HashMap;

impl Solution {
  pub fn longest_str_chain(words: Vec<String>) -> i32 {
    let mut words = words;
    words.sort_by(|a, b| a.len().cmp(&b.len()));

    let mut dp: HashMap<&String, i32> = HashMap::new();

    for word in &words {
      dp.insert(word, 1);
      for i in 0..word.len() {
        let mut newWord = String::new();
        newWord.push_str(&word[0..i]);
        newWord.push_str(&word[i+1..]);
        if dp.contains_key(&newWord) {
          dp.insert(word, (*dp.get(word).unwrap()).max(1 + dp.get(&newWord).unwrap()));
        }
      }
    }

    let mut o = 0;
    for (_, value) in &dp {
      o = o.max(*value);
    }
    return o;
  }
}
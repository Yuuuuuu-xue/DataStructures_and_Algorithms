fn main() {
}

struct Solution {}

use std::collections::HashMap;

struct MyHashMap {
  m: HashMap<i32, i32>,
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl MyHashMap {

  fn new() -> Self {
    MyHashMap { m: HashMap::new() }
  }
  
  fn put(&mut self, key: i32, value: i32) {
    self.m.insert(key,value);
  }
  
  fn get(&self, key: i32) -> i32 {
    if let Some(v) = self.m.get(&key) {
      return *v;
    }
    -1
  }
  
  fn remove(&mut self, key: i32) {
    self.m.remove(&key);
  }
}

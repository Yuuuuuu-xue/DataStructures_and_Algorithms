import java.util.AbstractMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Stack;


interface NestedInteger {
  // @return true if this NestedInteger holds a single integer, rather than a nested list.
  public boolean isInteger();

  // @return the single integer that this NestedInteger holds, if it holds a single integer
  // Return null if this NestedInteger holds a nested list
  public Integer getInteger();
  
  // @return the nested list that this NestedInteger holds, if it holds a nested list
  // Return empty list if this NestedInteger holds a single integer
  public List<NestedInteger> getList();
}


public class NestedIterator implements Iterator<Integer> {

  Stack<Map.Entry<List<NestedInteger>, Integer>> stack;

  public NestedIterator(List<NestedInteger> nestedList) {
    this.stack = new Stack<>();
    this.stack.push(new AbstractMap.SimpleEntry<>(nestedList, 0));
  }

  @Override
  public Integer next() {
    while (!stack.isEmpty()) {
      Map.Entry<List<NestedInteger>, Integer> m = stack.pop();    
      
      int i = m.getValue();

      // If the index is a valid index
      if (i < m.getKey().size()) {
        // Update the entry and push back to the stack
        m.setValue(i + 1);
        stack.push(m);
        
        // Get the value at that index
        NestedInteger k = m.getKey().get(i);
        // Check if k is an integer
        if (k.getInteger() != null) {
          return k.getInteger();
        } else {
          // Initialize a new entry and push back to the stack, then the next iteration will pop this out
          stack.push(new AbstractMap.SimpleEntry<>(k.getList(), 0));
        }
      }
    }
    throw new NoSuchElementException();
  }

  @Override
  public boolean hasNext() {
    while (!stack.isEmpty()) {
      Map.Entry<List<NestedInteger>, Integer> m = stack.pop();    
      
      // If the index is a valid index
      if (m.getValue() < m.getKey().size()) {
        
        // Get the value at that index
        NestedInteger k = m.getKey().get(m.getValue());
        // Check if k is an integer
        if (k.getInteger() != null) {
          // Push back the array since that index points to an integer
          stack.push(m);
          return true;
        } else {
          // Update stack to the next integer
          m.setValue(m.getValue() + 1);
          stack.push(m);
          // Initialize a new entry and push back to the stack, then the next iteration will pop this out
          stack.push(new AbstractMap.SimpleEntry<>(k.getList(), 0));
        }
      }
    }
    return false;
  }
}

/**
* Your NestedIterator object will be instantiated and called as such:
* NestedIterator i = new NestedIterator(nestedList);
* while (i.hasNext()) v[f()] = i.next();
*/
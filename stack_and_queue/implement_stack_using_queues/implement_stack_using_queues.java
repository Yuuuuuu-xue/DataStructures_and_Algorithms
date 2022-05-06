import java.util.LinkedList;
import java.util.Queue;

class MyStack {
  private Queue<Integer> currQueue;
  private int currSize; 

  public MyStack() {
    this.currQueue = new LinkedList<>();
    this.currSize = 0;
  }
  
  public void push(int x) {
    this.currQueue.add(x);
    this.currSize ++;
  }
  
  public int pop() {
    for (int i = 0; i < this.currSize - 1; i ++) {
      this.currQueue.add(this.currQueue.remove());
    }
    this.currSize --;
    return this.currQueue.remove();
  }
  
  public int top() {
    for (int i = 0; i < this.currSize - 1; i ++) {
      this.currQueue.add(this.currQueue.remove());
    }
    int num = this.currQueue.remove();
    this.currQueue.add(num);
    return num;
  }
  
  public boolean empty() {
    return this.currSize == 0;
  }
}

/**
* Your MyStack object will be instantiated and called as such:
* MyStack obj = new MyStack();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.top();
* boolean param_4 = obj.empty();
*/
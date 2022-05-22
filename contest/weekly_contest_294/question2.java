import java.util.Arrays;

class Solution {
  public int maximumBags(int[] capacity, int[] rocks, int additionalRocks) {
    int o = 0;
    int[] r = new int[capacity.length];
    for (int i = 0; i < capacity.length; i ++) {
      if (capacity[i] - rocks[i] == 0) {
        o ++;
      } else {
        r[i] = capacity[i] - rocks[i];
      }
    }
    Arrays.sort(r);
    for (int i : r) {
      if (i > 0) {
        additionalRocks -= i;
        if (additionalRocks >= 0) {
          o += 1;
        } else {
          return o;
        }
      }
    }
    return o;
  }
}
import java.util.Arrays;

class Solution {
  public int minimumLines(int[][] stockPrices) {
    if (stockPrices.length == 1) {
      return 0;
    }
    int o = 1;
    Arrays.sort(stockPrices, (x, y) -> x[0] - y[0]);
    System.out.println(Arrays.deepToString(stockPrices));
    long ratio1 = stockPrices[1][1] - stockPrices[0][1];
    long ratio2 = stockPrices[1][0] - stockPrices[0][0];

    
    for (int i = 1; i < stockPrices.length - 1; i++) {
      long ratioA = (stockPrices[i + 1][1] - stockPrices[i][1]);
      long ratioB = (stockPrices[i + 1][0] - stockPrices[i][0]);

      if (ratio2 * ratioA != ratioB * ratio1) {
        ratio1 = ratioA;
        ratio2 = ratioB;
        o++; 
      }
    }
    return o;
  }
}


class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.minimumLines(new int[][]{{83, 35}, {79, 51}, {61, 48}, {}}));
  }
}
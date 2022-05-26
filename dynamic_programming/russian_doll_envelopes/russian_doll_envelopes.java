import java.util.Arrays;

class Solution {
    public int maxEnvelopes(int[][] envelopes) {
        Arrays.sort(envelopes, (x, y) -> (x[0] == y[0]) ? y[1] - x[1] : x[0] - y[0]);
        // System.out.println(Arrays.deepToString(envelopes));
        int[] dp = new int[envelopes.length];
        int o = 0;
        for (int i = 0; i < envelopes.length; i++) {
            int bs = Arrays.binarySearch(dp, 0, o, envelopes[i][1]);
            if (bs >= 0) {
                // System.out.println(bs);
                dp[bs] = envelopes[i][1];
            } else {
                // System.out.println(bs);
                if (-bs <= o) {
                    dp[-bs - 1] = envelopes[i][1];
                } else {
                    dp[o++] = envelopes[i][1];
                }
            }
        }
        return o;
    }
}

class Test {
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.maxEnvelopes(new int[][]{{5, 4}, {6, 4}, {6, 7}, {2, 3}}));
        System.out.println(s.maxEnvelopes(new int[][]{{1, 1}, {1, 1}, {1, 1}}));
        System.out.println(s.maxEnvelopes(new int[][]{{4, 5}, {4, 6}, {6, 7}, {2, 3}, {1, 1}}));
        System.out.println(s.maxEnvelopes(new int[][]{{1, 2}, {2, 3}, {3, 4}, {3, 5}, {4, 5}, {5, 5}, {5, 6}, {6, 7}, {7, 8}}));
    }
}
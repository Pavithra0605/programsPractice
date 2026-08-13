class Solution {

    public int find(int[] ldr, int node) {
        if (ldr[node] != node) {
            ldr[node] = find(ldr, ldr[node]);
        }
        return ldr[node];
    }

    private void join(int[] ldr, int lt, int rt) {
        ldr[find(ldr, rt)] = find(ldr, lt);
    }

    public int findCircleNum(int[][] g) {

        int N = g.length;

        int[] ldr = new int[N];

       
        for (int i = 0; i < N; i++) {
            ldr[i] = i;
        }
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (g[i][j] == 1) {
                    join(ldr, i, j);
                }
            }
        }
        int count = 0;

        for (int i = 0; i < N; i++) {
            if (find(ldr, i) == i) {
                count++;
            }
        }

        return count;
    }
}

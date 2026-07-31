import java.util.*;

public class MinMaxPair {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a[] = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            a[i] = sc.nextInt();
        }

        int samecnt = 0;
        int exchcnt = 0;

        for (int i = 1; i <= n; i++) {
            if (i == a[i]) {
                samecnt++;
            } else if (a[i] != i && i == a[a[i]]) {
                exchcnt++;
            }
        }

        System.out.println(exchcnt / 2 + 1L * samecnt * (samecnt - 1) / 2);
    }
}

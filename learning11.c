#include <stdio.h>
#include <stdlib.h>

/* qsort関数で昇順にする比較関数 */
int compare(const void *a, const void *b) {
    /* a < b なら負の値, a > b なら正の値,　a == b なら０を返す */
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int N;
    scanf("%d", &N);

    /* 数列 A, 数列 Bを統合する配列 */
    int combined[2 * N];
    /* 数列 Aの取り込み */
    for (int i = 0; i < N; i++) {
        scanf("%d", &combined[i]);
    }
    /* 数列 Bの取り込み */
    for (int i = 0; i < N; i++) {
        scanf("%d", &combined[N + i]);
    }

    /* 昇順にクイックソート */
    qsort(combined, 2 * N, sizeof(int), compare);

    /* combined[0]を出力し, 以降は一つ前の要素と !=なら出力 */
    printf("%d", combined[0]);
    for (int i = 1; i < 2 * N; i++) {
        if (combined[i] != combined[i - 1]) {
            printf(" %d", combined[i]);
        }
    }
    printf("\n");

    return 0;
}

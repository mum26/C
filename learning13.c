#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
int compareIntsASC(const void *, const void *);

int main(void) {
    int N;
    scanf("%d", &N);
    int array[N];
    for (size_t i = 0; i < N; i++) {
        scanf(" %d", &array[i]);
    }

    /* 昇順にソート */
    qsort(array, N, sizeof(int), compareIntsASC);

    /* 配列の最初(最小)と最後(最大)を出力 */
    printf("%d %d\n", array[N -1], array[0]);
}

/* int型昇順比較 */
int compareIntsASC(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 < arg2) return -1;  // arg1がarg2より小さい場合、負の値を返す
    if (arg1 > arg2) return 1;  // arg1がarg2より大きい場合、正の値を返す
    return 0;                   // 両者が等しい場合、0を返す
}

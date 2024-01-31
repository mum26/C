#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    double F[N];
    F[0] = 0;
    F[1] = 1;

    /* フィボナッチ数列の計算 */
    for (size_t i = 2; i < N; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }

    /* N個のフィボナッチ数列を出力 */
    for (size_t i = 0; i < N; i++) {
        printf("%.0f\n", F[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* N個の点を受け取り、A番目と B番目の点の距離を計算する */
int main(void) {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    int X[N], Y[N];
    for (size_t i = 0; i < N; i++) {
        scanf(" %d %d", &X[i], &Y[i]);
    }

    A -= 1;
    B -= 1;
    /* マンハッタン距離(|x1 - x2| + |y1 - y2|)で距離を求める */
    int distance = abs(X[A] - X[B]) + abs(Y[A] - Y[B]);
    printf("%d\n", distance);

    return 0;
}

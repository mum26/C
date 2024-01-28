#include <stdio.h>

int main(void) {
    /* 標準入力から値 N, M を取得 */
    int N, M;
    scanf("%d %d", &N, &M);

    /* 標準入力から A列, B列 の文字列を取得し, 配列に代入 */
    int A[N], B[M];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    /* M回,改行し,index に B[i]を加算 */
    int index = 0;
    for (int i = 0; i < M; i++) {
        /* B[i]回　,A[index + j]を出力　 */
        for (int j = 0; j < B[i]; j++) {
            if (j > 0) printf(" ");
            printf("%d", A[index + j]);
        }
        printf("\n");
        index += B[i];
    }

    return 0;
}
